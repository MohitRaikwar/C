/*      C program to calculate gross salary of an employee from basic salary      */

#include<stdio.h>

//main function
int main()
{
    float basicSalary,grossSalary,HRA,DA;
    printf("Enter basic salary : ");
    scanf("%f",&basicSalary);
    if(1<basicSalary && basicSalary<=4000)
    {
        HRA=0.1*basicSalary;
        DA=0.5*basicSalary;
    }

    else if(4000<basicSalary && basicSalary<=8000)
    {
        HRA=0.2*basicSalary;
        DA=0.6*basicSalary;
    }

    else if(8000<basicSalary && basicSalary<=12000)
    {
        HRA=0.25*basicSalary;
        DA=0.7*basicSalary;
    }

    else
    {
        HRA=0.3*basicSalary;
        DA=0.8*basicSalary;
    }
    grossSalary=basicSalary+HRA+DA;
    printf("Gross Salary : %.2f\n",grossSalary);
    return 0;
}