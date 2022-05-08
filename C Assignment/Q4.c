/*      C program to display and find sum of series 1+11+111+1111+....upto n     */

#include<stdio.h>
#include<math.h>

//main function
int main()
{
    int n,sum=0,prev=0,num;
    do
    {
        printf("Enter number of terms : ");
        scanf("%d",&n);
    } while (n<1);

    printf("Series : ");
    for(int i=0;i<n;i++)
    {
        num=pow(10,i)+prev;

        //prints the series
        if(i==n-1)
            printf("%d\n",num);
        else
            printf("%d+",num);
        prev+=pow(10,i);

        //calculates sum
        sum+=num;
    }
    printf("Sum : %d\n",sum);
    return 0;
}