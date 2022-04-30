//C program to

#include<stdio.h>
#include<stdbool.h>

//main function
int main()
{
    int n,count=0,temp;
    bool otherFactors=false;
    printf("Enter a no. : ");
    scanf("%d",&n);
    temp=n;
    for(int j=1;j<temp/2&&temp!=0;j++)
    for(int i=1;i<temp;i++)
    {
        if(temp%d==0)
        {
            if(i==2 || i==3 || i==5)
            {
                temp/=2;
                count++;
            }
            else
            {
                otherFactors=true;
                temp/=i;
            }
        }
    }
    if(!otherFactors)
        printf("%d\n",count);
    else
        printf("%d is not a ugly prime number\n",n);
    return 0;
}