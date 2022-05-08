/*      C program to check if a number consists of three consecutive 5s     */

#include<stdio.h>

//main function
int main()
{
    int n,count=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%10==5)
        {
            count=0;
            while(n%10==5)
            {
                count++;
                n/=10;
            }
            if(count>=3)
                break;
        }
        else
            n/=10;
    }
    if(count>=3)
        printf("Result : YES\n");
    else
        printf("Result : NO\n");
    return 0;
}