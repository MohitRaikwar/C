#include<stdio.h>
#include<math.h>

int main()
{
    int n,reverse=0;
    printf("Enter any number :");
    scanf("%d",&n);
    int temp=n;
    int count=0;
    for(int i=n;i!=0;count++)
    {
        i/=10;
    }
    for(int i=count-1;temp!=0;i--)
    {
        reverse+=(temp%10)*pow(10,i);
        temp/=10;
    }
    printf("Reverse of %d is %d\n",n,reverse);
    return 0;
}