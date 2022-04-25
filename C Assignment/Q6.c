#include<stdio.h>

int is_Amicable(int n1,int n2);
int main()
{
    int num1,num2;
    printf("Enter first number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);
    if(is_Amicable(num1,num2))
    {
        printf("%d and %d are amicable number\n",num1,num2);
    }
    else
    {
        printf("%d and %d are not amicable number\n",num1,num2);
    }

    return 0;
}

int is_Amicable(int n1,int n2)
{
    int sum1=0,sum2=0;
    for(int i=1;i<=n1/2;i++)
    {
        if(n1%i==0)
            sum1+=i;
    }
    for(int j=1;j<=n2/2;j++)
    {
        if(n2%j==0)
            sum2+=j;
    }
    if(sum2==n1 || sum1==n2)
        return 1;
    else
        return 0;
}