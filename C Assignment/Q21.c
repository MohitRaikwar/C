/*      C program to print the sum of product of consecutive numbers in an array         */

#include<stdio.h>

//functions prototype
void input(int arr[],int size);

//main function
int main()
{
    int n,sum=0;
    printf("Enter size of list : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    for(int i=0;i<n-1;i++)
    {
        sum+=arr[i]*arr[i+1];
    }
    printf("Sum of product of consecutive numbers : %d\n",sum);
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