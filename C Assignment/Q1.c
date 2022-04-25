#include<stdio.h>
#include<math.h>

int is_Armstrong(int n);

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(is_Armstrong(n))
    {
        printf("%d is armstrong number\n",n);
    }
    else
    {
        printf("%d is not armstrong number\n",n);
    }
    return 0;
}
int is_Armstrong(int n)
{
    int sumOfCubes=0,rem,temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sumOfCubes+=pow(rem,3);
        temp=temp/10;
    }
    if(sumOfCubes==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}