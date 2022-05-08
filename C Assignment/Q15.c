/* C program to print following pattern*/
/* Pattern 1    Pattern 2
   1            1
   12           22
   123          333
   ....          ....
         upto n         */

#include<stdio.h>

//main function
int main()
{
    int n,choice;
    do
    {
        printf("Enter no. : ");
        scanf("%d",&n);
    } while (n<1);
    printf("Pattern 1\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",j);
        printf("\n");
    }
    printf("\nPattern 2\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",i);
        printf("\n");
    }
    return 0;
}