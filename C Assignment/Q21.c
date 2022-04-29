#include<stdio.h>

//functions prototype
void input(int arr[],int size);

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
        printf("Enter %i element :",i+1);
        scanf("%i",&arr[i]);
    }
}