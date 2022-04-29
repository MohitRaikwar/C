#include<stdio.h>

//functions prototype
void input(int arr[],int size);
int find_sum(int arr[],int size);

//main function
int main()
{
    int size;
    printf("Enter size of array :");
    scanf("%i",&size);
    int arr[size];
    input(arr,size);
    printf("Output : %d\n",find_sum(arr,size));
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

//returns max(sum of all even numbers , sum of all odd numbers)
int find_sum(int arr[],int size)
{
    int sumEven,sumOdd=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
            sumEven+=arr[i];
        else
            sumOdd+=arr[i];
    }
    int maxSum=(sumEven>sumOdd)?sumEven:sumOdd;
    return maxSum;
}