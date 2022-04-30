/*      C program to find reverse of an integer number     */

#include<stdio.h>
#include<math.h>

//main function
int main()
{
    int n,temp,count=0,reverse=0;
    printf("Enter any number :");
    scanf("%d",&n);
    temp=n;

    //calculates total no. of digits in n
    for(int i=n;i!=0;count++)
    {
        i/=10;
    }
    for(int i=count-1;temp!=0;i--)
    {
        reverse+=(temp%10)*pow(10,i);
        temp/=10;
    }
    printf("Reverse of %d is %d\n",n,reverse);
    return 0;
}