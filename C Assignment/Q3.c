/*     C program to calculate HCF and LCM of two numbers    */

#include<stdio.h>

//main function
int main()
{
    int x,y,LCM,HCF,max;
    printf("Enter value for x : ");
    scanf("%d",&x);
    printf("Enter value for y : ");
    scanf("%d",&y);
    max=(x>y)?x:y;
    for(int i=1;i<=max;i++)
    {
        if(x%i==0 && y%i==0)
            HCF=i;
    }
    LCM=(x*y)/HCF;
    printf("HCF : %d\n",HCF);
    printf("LCM : %d\n",LCM);
    return 0;
}