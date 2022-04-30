/*      C program to print two digits no. whose sum of both digits is multiple of 7     */

#include<stdio.h>

//main function
int main()
{
    int temp,sum;
    printf("Two digit numbers whose sum of both digits is multiple of 7 \n");
    for(int i=10;i<100;i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
            sum+=temp%10;
            temp/=10;
        }
        if(sum%7==0)
        printf("%d , ",i);
    }
    printf("\n");
    return 0;
}