/* C program to print total electricity bill amount */

#include<stdio.h>

//function prototype
float total_amount(int unit);

//main function
int main()
{
    int units;
    printf("Enter no.of units consumed : ");
    scanf("%d",&units);
    printf("Total charge amount : %.2f\n",total_amount(units));
    return 0;
}

//returns total bill amount
float total_amount(int unit)
{
    float amount=0;
    int tempUnit;
    if(unit>300)
    {
        tempUnit=unit-300;
        amount+=tempUnit*2;
        unit-=tempUnit;
    }
    if(unit>200&&unit<=300)
    {
        tempUnit=unit-200;
        amount+=tempUnit*1.5;
        unit-=tempUnit;
    }
    if(unit<=200)
    {
        amount+=unit*1;
    }

    return amount;
}