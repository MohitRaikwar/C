/*      C program to print inverted half pyramid of *(mirror)*/

#include<stdio.h>

//main function
int main()
{
    int n;
    do
    {
        printf("Enter value for n : ");
        scanf("%d",&n);
    } while (n<1);

    for(int x=0;x<n;x++)
    {
        for(int j=0;j<x;j++)
            printf(" ");
        for(int k=0;k<(n-x);k++)
            printf("*");
        printf("\n");
    }
    return 0;
}