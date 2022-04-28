#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    do
    {
        printf("Enter a positive integer : ");
        scanf("%d",&n);
    } while (n<0);

    int temp=n,rem,binary=0;
    for(int i=0;temp!=0;i++)
    {
        rem=temp%2;
        binary+=rem*pow(10,i);
        temp/=2;
    }
    printf("Binary equivalent of %d is : %d\n",n,binary);
    return 0;
}