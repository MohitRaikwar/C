/*      C program to implement bubble sort , insertion sort and binary search   */

#include<stdio.h>
#include<stdbool.h>

//functions prototype
void bubble_sort(int arr[],int size);
void insertion_sort(int arr[],int size);
int binary_search(int arr[],int l,int r,int num);
void input(int arr[],int size);
void swap(int *a,int *b);
void print(int arr[],int size);

int i,j;

//main function
int main()
{
    int size,choice,num;
    printf("Enter size of array :");
    scanf("%d",&size);
    int arr[size];
    input(arr,size);
    printf("\nSelect from following options\n");
    printf("\n1.Sort array using bubble sort\n");
    printf("2.Sort array using insertion sort\n");
    printf("3.Find an element in array using binary search\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Before sorting\n");
               print(arr,size);
               bubble_sort(arr,size);
               printf("After sorting\n");
               print(arr,size);
               break;
        case 2:printf("Before sorting\n");
               print(arr,size);
               insertion_sort(arr,size);
               printf("After sorting\n");
               print(arr,size);
               break;
        case 3:printf("Enter any no. to search :");
               scanf("%d",&num);
               int result = binary_search(arr,0,size,num);
               if(result==-1)
                    printf("%d is not found..",num);
               else
                    printf("%d is found at index :%d\n",num,result);
                break;
        default:printf("Wrong choice \n");
                break;
    }
    return 0;
}

//sorts array using bubble sort algorithm
void bubble_sort(int arr[],int size)
{
    bool swapped;
    for(i=0;i<size-1;i++)     //size-1 for unnecessary going for last+1 element in j loop
    {

        for(j=0;j<(size-i-1);j++)
        {
            swapped=false;
            if(arr[j]>arr[j+1])  //Searching for minimum no. and then updating it
            {
                swap(&arr[j],&arr[j+1]);
                swapped=true;

            }
        }
       printf("After %d pass\n",i+1);
       print(arr,size);

       //If no elements were swapped that means array is already sorted
       if(swapped==false)
       break;
    }
}

//sorts array using insertion sort algorithm
void insertion_sort(int arr[],int size)
{
    int key;
    for(i=1;i<size;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int binary_search(int arr[],int l,int r,int num)
{
    if(r>l)               //Condition to quit
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==num)
            return mid;
        if(arr[mid]>num)
            return binary_search(arr,l,mid-1,num);
        else
            return binary_search(arr,mid+1,r,num);
    }
        return -1; //if not found
}

//swap values of two variables
void swap(int *a,int *b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}

//prints the array
void print(int arr[],int size)
{
    for(i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
    printf("\n");
}

//grants user to enter array elements
void input(int arr[],int size)
{
    for(i=0;i<size;i++)
    {
      printf("Enter %d element :",i+1);
      scanf("%d",&arr[i]);
    }
}