/*     C program to check if a number is Armstrong or not      */

#include<stdio.h>
#include<math.h>

//function prototype
int is_Armstrong(int n);

//main function
int main()
{
    int n;
    do
    {
        printf("Enter a number :");
        scanf("%d",&n);
        if(n<0)
            printf("Please enter a positive integer.\n");
    }while(n<0);
    if(is_Armstrong(n))
        printf("%d is armstrong number\n",n);
    else
        printf("%d is not armstrong number\n",n);
    return 0;
}

//checks if number is Armstrong or not
int is_Armstrong(int n)
{
    int sumOfCubes=0,rem,temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sumOfCubes+=pow(rem,3);
        temp=temp/10;
    }
    if(sumOfCubes==n)
        return 1;
    else
        return 0;
}