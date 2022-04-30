#include<stdio.h>
#include<stdbool.h>

//functions prototype
void Bubble_Sort(int arr[],int size);
int binary_search(int arr[],int l,int r,int num);
void input(int arr[],int size);
void swap(int *a,int *b);
void print(int arr[],int size);

//main function
int main()
{
    int size,choice,num;
    printf("Enter size of array :");
    scanf("%d",&size);
    int arr[size];
    input(arr,size);
    printf("Select from following options\n");
    printf("1.Sort array using bubble sort\n");
    printf("2.Sort array using insertion sort\n");
    printf("3.Find an element in array using binary search\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Before sorting\n");
               print(arr,size);
               Bubble_Sort(arr,size);
               printf("After sorting\n");
               print(arr,size);
               break;
        case 2:break;
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
void Bubble_Sort(int arr[],int size)
{
    bool swapped;
    for(int i=0;i<size-1;i++)     //size-1 for unnecessary going for last+1 element in j loop
    {

        for(int j=0;j<(size-i-1);j++)
        {
            swapped=false;
            if(arr[j]>arr[j+1])  //Searching for minimum no. and then updating it
            {
                swap(&arr[j],&arr[j+1]);
                swapped=true;

            }
        }

       //Swapping minimum element to i th index
       printf("After %d pass\n",i+1);
       print(arr,size);

       //If no elements were swapped that means array is already sorted
       if(swapped==false)
       break;
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
            return binary(arr,l,mid-1,num);
        else
            return binary(arr,mid+1,r,num);
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
    for(int i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
    printf("\n");
}

//grants user to enter array elements
void input(int arr[],int size)
{

    for(int i=0;i<size;i++)
  {
      printf("Enter %d element :",i+1);
      scanf("%d",&arr[i]);

  }

}