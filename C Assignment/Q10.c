/*       C program to sort an array of integers using bubble sort     */

#include<stdio.h>
#include<stdbool.h>

//functions prototype
void bubble_sort(int arr[],int size);
void input(int arr[],int size);
void swap(int *a,int *b);
void print(int arr[],int size);

//main function
int main()
{
    int size;
    printf("Enter size of array :");
    scanf("%d",&size);
    int arr[size];
    input(arr,size);
    printf("Before sorting\n");
    print(arr,size);
    bubble_sort(arr,size);
    printf("After sorting\n");
    print(arr,size);
    return 0;
}

//sorts array using bubble sort algorithm
void bubble_sort(int arr[],int size)
{
    bool swapped;
    for(int i=0;i<size-1;i++)     //size-1 for unnecessary going for last+1 element in j loop
    {
        for(int j=0;j<(size-i-1);j++)
        {
            swapped=false;
            if(arr[j]>arr[j+1])
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