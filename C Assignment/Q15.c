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
    printf("Enter no. : ");
    scanf("%d",&n);
    printf("1.Pattern 1\n");
    printf("2.Pattern 2\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                    printf("%d",j);
                printf("\n");
            }
        break;
    case 2:for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
        break;
    default:printf("Wrong choice\n");
        break;
    }
    return 0;
}