#include<stdio.h>
#include<math.h>

int main()
{
    int n,sum=0;
    do
    {
        printf("Enter number of terms : ");
        scanf("%d",&n);
    } while (n<1);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            sum+=pow(10,j);
        }
    }
    printf("Sum : %d\n",sum);
    return 0;
}