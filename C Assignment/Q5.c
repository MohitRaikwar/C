#include<stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter n :");
        scanf("%d",&n);
    } while (n<1);

    for(int x=0;x<n;x++)
    {
        for(int j=0;j<x;j++)
            printf("_");
        for(int k=0;k<(n-x);k++)
            printf("*");
        printf("\n");
    }
}