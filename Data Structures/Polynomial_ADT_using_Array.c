             /*Implementation of polynomial ADT using array*/

#include<stdio.h>
#include<stdbool.h>  //for bool
#include<stdlib.h>   //for exit()

//define maximum degree of polynomial using macro
#define MAX_DEGREE 101

//defining structure
typedef struct polyADT
{
   int degree;
   float coefficient[MAX_DEGREE];
}polyADT;

//functions prototype
void zero_polynomial(polyADT *p);
void non_zero_polynomial(polyADT *p,int degree);
bool is_zero_polynomial(polyADT *p);
float get_coefficient(polyADT *p,int order);
int get_degree(polyADT *p);
void add_polynomial(polyADT *p1,polyADT *p2);
void subtract_polynomial(polyADT *p1,polyADT *p2);
void print_polynomial(polyADT *p);

//main function
int main()
{
 polyADT p1,p2;
 int degree;
 while(1)
 {
    int choice;
    printf("\nSelect from following options :\n\n");
    printf("1.Create a zero polynomial\n");
    printf("2.Create a non-zero polynomial\n");
    printf("3.Check whether the polynomial is zero or not\n");
    printf("4.Return the coefficient of a given term\n");
    printf("5.Return the degree of polynomial\n");
    printf("6.Addition of two polynomials\n");
    printf("7.Subtraction of two polynomials\n");
    printf("8.Print polynomial\n");
    printf("9.Exit\n");
    printf("\nEnter your choice :");
    scanf("%i",&choice);
    switch(choice)
    {
        case 1:zero_polynomial(&p1);
               break;
        case 2:zero_polynomial(&p1);
               printf("Enter the degree of first polynomial :");
               scanf("%d",&degree);
               non_zero_polynomial(&p1,degree);
               break;
        case 3:if(is_zero_polynomial(&p1))
               {
                   printf("Yes, it is zero polynomial\n");
               }
               else
               {
                   printf("No , it is not a zero polynomial\n");
               }
               break;
        case 4:printf("Enter the order of element to get it's coefficient :");
               scanf("%d",&degree);
               printf("The coefficient of x^%d is: %.1f\n",degree,get_coefficient(&p1,degree));
               break;
        case 5:printf("Degree of polynomial :%d\n",get_degree(&p1));
               break;
        case 6:printf("Enter second polynomial \n");
               printf("Enter its degree :");
               scanf("%d",&degree);
               zero_polynomial(&p2);
               non_zero_polynomial(&p2,degree);
               printf("\np1 = ");
               print_polynomial(&p1);
               printf("\np2 = ");
               print_polynomial(&p2);
               add_polynomial(&p1,&p2);
               break;
        case 7:printf("Enter second polynomial \n");
               printf("Enter its degree :");
               scanf("%d",&degree);
               zero_polynomial(&p2);
               non_zero_polynomial(&p2,degree);
               printf("\np1 = ");
               print_polynomial(&p1);
               printf("\np2 = ");
               print_polynomial(&p2);
               subtract_polynomial(&p1,&p2);
               break;
        case 8:printf("p1 = ");
               print_polynomial(&p1);
               break;
        case 9:exit(0);
               break;
        default:printf("Wrong choice..");
               break;

    }
 }
 return 0;
}

//sets all coefficients value and degree to zero
void zero_polynomial(polyADT *p)
{
    for(int i=0;i<MAX_DEGREE;i++)
    {
        p->coefficient[i]=0;
    }
    p->degree=0;
}

//grants user to input a non-zero polynomial
void non_zero_polynomial(polyADT *p,int degree)
{
    for(int i=degree;i>=0;i--)
    {
        printf("Enter value of coefficient having order %d :",i);
        scanf("%f",&p->coefficient[i]);
    }
    p->degree=degree;
}

//checks if polynomial is zero
bool is_zero_polynomial(polyADT *p)
{
    if(p->degree==0)
     return true;
    else
     return false;
}

//returns the coefficient having order 'order'
float get_coefficient(polyADT *p,int order)
{
    return(p->coefficient[order]);
}

//returns the degree of polynomial
int get_degree(polyADT *p)
{
    return(p->degree);
}

//Prints addition of two polynomials
void add_polynomial(polyADT *p1,polyADT *p2)
{
    polyADT p3;
    p3.degree=(p1->degree > p2->degree)?p1->degree:p2->degree;
    for(int i=0;i<=p3.degree;i++)
    {
        p3.coefficient[i]=p1->coefficient[i]+p2->coefficient[i];
    }
    printf("\np1 + p2 = ");
    print_polynomial(&p3);
}

//Prints subtraction of two polynomials
void subtract_polynomial(polyADT *p1,polyADT *p2)
{
    polyADT p3;
    p3.degree=(p1->degree > p2->degree)?p1->degree:p2->degree;
    for(int i=0;i<=p3.degree;i++)
    {
        p3.coefficient[i]=p1->coefficient[i]-p2->coefficient[i];
    }
    printf("\np1 -p2 = ");
    print_polynomial(&p3);
}

//Prints the polynomial
void print_polynomial(polyADT *p)
{
    printf("%.1fx^%d",p->coefficient[p->degree],p->degree);
    for(int i=p->degree-1;i>=0;i--)
    {
        printf(" + %.1fx^%d",p->coefficient[i],i);
    }
    printf("\n");
}

