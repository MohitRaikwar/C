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

        for(int i=0;i<n;i++)
        {

        for(int j=0;j<=i;j++)
        {
         printf("#");
        }
            printf("\n");
        }

}
