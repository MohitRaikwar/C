/*      C program to print no. of ugly prime numbers in a number    */

#include<stdio.h>
#include<stdbool.h> //for bool data type

//main function
int main()
{
    int n,count=0,temp;
    bool otherFactors=false;
    printf("Enter a no. : ");
    scanf("%d",&n);
    temp=n;
    while(temp!=1)
    {
        if(temp%2==0)
        {
            temp/=2;
            count++;
        }
        else if(temp%3==0)
        {
            temp/=3;
            count++;
        }
        else if(temp%5==0)
        {
            temp/=5;
            count++;
        }
        else
        {
            otherFactors=true;
            break;
        }
    }
    if(!otherFactors)
        printf("%d\n",count);
    else
        printf("%d is not a ugly prime number\n",n);
    return 0;
}