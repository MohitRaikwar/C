/*      C program to reverse an array        */

#include<stdio.h>

//functions prototype
void input(int arr[],int size);
void reverse(int arr[],int size);
void print(int arr[],int size);
void swap(int *a,int *b);

//main function
int main()
{
    int n;
    printf("Enter no.of elements to store : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    printf("Array before reversing \n");
    print(arr,n);
    reverse(arr,n);
    printf("Array after reversing \n");
    print(arr,n);
    return 0;

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

//reverse elements of array
void reverse(int arr[],int size)
{
    for(int i=0;i<size/2;i++)
    {
        swap(&arr[i],&arr[size-i-1]);
    }
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

//swap values of two variables
void swap(int *a,int *b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}