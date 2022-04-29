#include<stdio.h>

int main()
{
    int n=4;
    while(n!=0)
    {
        if(n%2==0)
        {
            printf("HEllo in ");
            n/=2;
        }
        else if(n%3==0)
        {
            printf("Hello out");
        }
        n++;
    }
    return 0;
}