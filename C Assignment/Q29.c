#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n,temp;
    bool otherFactors=false;
    printf("Enter a no. : ");
    scanf("%d",&n);
    temp=n;
    int count=0;
    while(temp!=0)
    {
        printf("line 14");
        if(temp%2==0)
        {
            printf("line 17");
            temp/=2;
            count++;
        }
        else if(temp%3==0)
        {
            printf("line 23");
            temp/=3;
            count++;
        }
        else if(temp%5==0)
        {
            printf("line 29");
            temp/=5;
            count++;
        }
        else
        {
            for(int i=1;i<temp;i++)
            {
                if(temp%i==0)
                {
                    printf("line 39");
                    temp/=i;
                    otherFactors=true;
                }
            }
        }
    }
    if(!otherFactors)
        printf("%d\n",count);
    else
        printf("%d is not a ugly prime number\n",n);
    return 0;
}