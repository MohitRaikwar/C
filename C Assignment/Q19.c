#include<stdio.h>

float total_amount(int unit);

int main()
{
    int units;
    printf("Enter no.of units consumed : ");
    scanf("%d",&units);
    printf("Total : %f\n",total_amount(units));
    return 0;
}

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