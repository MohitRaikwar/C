#include<stdio.h>
void builder(int);
void main(void)
{
    int n;
    do{
        printf("Enter any positive no. :");
        scanf("%i",&n);

    }while(n<1);
    builder(n);

}
void builder(int n)
{
    for(int x=0;x<n;x++)
    {
        for(int i=0;i<n-x-1;i++)
        {
            printf(" ");
        }
        for(int j=0;j<x+1;j++)
        {
            printf("#");
        }
        printf("  ");
        for(int k=0;k<=x;k++)
        {
         printf("#");
        }
        printf("\n");


    }
}
