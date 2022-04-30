/*      C program to check if a number is triangular number or not     */

#include<stdio.h>

//function prototype
int isTriangular(int n);

//main function
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if(isTriangular(n))
        printf("%d is triangular number\n",n);
    else
        printf("%d is not a triangular number\n",n);
    return 0;
}

//checks whether n is triangular number or not
int isTriangular(int n)
{
    if(n<0)
        return 0;
    int sum=0;
    for(int i=1;sum<=n;i++)
    {
        sum+=i;
        if(sum==n)
            return 1;
    }
    return 0;
}