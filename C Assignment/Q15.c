#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter no. : ");
    scanf("%d",&n);
    for(int x=1;x<=n;x++)
    {
        k=1;
        for(int i=1;i<=2*x;i++)
        {
            if(k==x)
                printf("%d",k);
            else
            {
                printf("%d",k);
                k++;
            }
        }
        printf("\n");

    }
    return 0;
}