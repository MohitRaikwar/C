/*       C program to calculate the area and perimeter of a triangle         */

#include<stdio.h>
#include<math.h>

//functions prototype
double read_input();
double perim(double a,double b,double c);
double area(double a,double b,double c);
double print_value(double val);

int main()
{
    double a,b,c;
    printf("a : ");
    a=read_input();
    printf("b : ");
    b=read_input();
    printf("c : ");
    c=read_input();
    printf("Perimeter of triangle : ");
    print_value(perim(a,b,c));
    printf("Area of triangle : ");
    print_value(area(a,b,c));
    return 0;
}

//returns  perimeter
double perim(double a,double b,double c)
{
    double perimeter =a+b+c;
    return perimeter;
}

//returns area
double area(double a,double b,double c)
{
    double s=0.5*(a+b+c);
    double area=(s*(s-a)*(s-b)*(s-c))*0.5;
    return area;
}

//reads input from user
double read_input()
{
   double a;
   scanf("%lf",&a);
   return a;

}

double print_value(double val)
{
    printf("%.2lf\n",val);
}

