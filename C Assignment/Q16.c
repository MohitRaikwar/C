/*      C program to display the number of even , odd and negative numbers in an array    */

#include<stdio.h>

//declaring maximum size of array using macro
#define MAX_SIZE 10

//functions prototype
void input(int arr[],int size);

int main()
{
    int arr[MAX_SIZE],countOdd=0,countEven=0,countNegative=0;
    input(arr,MAX_SIZE);
    for(int i=0;i<MAX_SIZE;i++)
    {
        if(arr[i]>=0)
        {
            if(arr[i]%2==0)
                countEven++;
            else
                countOdd++;
        }
        else
        {
            if(arr[i]%2==0)
            {
                countEven++;
                countNegative++;
            }
            else
            {
                countOdd++;
                countNegative++;
            }
        }

    }
    printf("Even count : %d\n",countEven);
    printf("Odd count : %d\n",countOdd);
    printf("Negative count : %d\n",countNegative);
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