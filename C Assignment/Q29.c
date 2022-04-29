#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n,count=0,temp;
    bool otherFactors=false;
    printf("Enter a no. : ");
    scanf("%d",&n);
    temp=n;
    for(int i=1;i<temp;i++)
    {
        if(temp%i==0)
            count++;
    }
    if(!otherFactors)
        printf("%d\n",count);
    else
        printf("%d is not a ugly prime number\n",n);
    return 0;
}