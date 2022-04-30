/*      C program to calculate tax amount       */

#include<stdio.h>

//function prototype
int calculate_tax(int income);

//main function
int main()
{
    int n;
    printf("Enter income : ");
    scanf("%d",&n);
    printf("Tax amount : %d\n",calculate_tax(n));
    return 0;
}

//returns total tax amount
int calculate_tax(int income)
{
    int taxAmount=0;
    int tempIncome;
    if(income>10000)
    {
        tempIncome=income-10000;
        taxAmount+=0.3*tempIncome;
        income-=tempIncome;
    }
    if(5000<income && income<=10000)
    {
        tempIncome=income-5000;
        taxAmount+=0.2*tempIncome;
        income-=tempIncome;
    }
    if(2500<income && income<=5000)
    {
        tempIncome=income-2500;
        taxAmount+=0.1*tempIncome;
        income-=tempIncome;
    }
    return taxAmount;
}