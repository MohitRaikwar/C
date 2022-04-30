/*      C program to print fahrenheit to centigrade table       */

#include<stdio.h>

//function prototype
float celsius(float f);

//main function
int main()
{
    printf("Fahrenheit   Celsius\n");
    for(float fahrenheit=-40;fahrenheit<=220;fahrenheit+=10)
    {
        printf("%-10.2f %7.2f",fahrenheit,celsius(fahrenheit));//-10 for printing 10 whitespaces after fahrenheit
        printf("\n");
    }
    return 0;
}

//returns celsius degree
float celsius(float f)
{
    float celsius=5/9.0*(f-32);
    return celsius;
}