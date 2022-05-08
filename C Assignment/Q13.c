/*      C program to calculate volume of conics     */

#include<stdio.h>
#include<math.h>  //for pow()

//defining value of PI using macro
#define PI 3.14

//functions prototype
float vol_cube(float a);
float vol_cuboid(float l,float b,float h);
float vol_sphere(float r);
float vol_cylinder(float r,float h);
float vol_cone(float r,float h);

//main function
int main()
{
    int choice;
    float l,b,h;
    printf("Select the shape to find its volume\n");
    printf("1.Cube\n");
    printf("2.Cuboid\n");
    printf("3.Sphere\n");
    printf("4.Cylinder\n");
    printf("5.Cone\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:printf("Enter side of cube : ");
               scanf("%f",&l);
               printf("Volume of cube : %.2f\n",vol_cube(l));
               break;
        case 2:printf("Enter length of cuboid : ");
               scanf("%f",&l);
               printf("Enter breadth of cuboid : ");
               scanf("%f",&b);
               printf("Enter height of cuboid : ");
               scanf("%f",&h);
               printf("Volume of cuboid : %.2f\n",vol_cuboid(l,b,h));
               break;
        case 3:printf("Enter radius of sphere : ");
               scanf("%f",&l);
               printf("Volume of sphere : %.2f\n",vol_sphere(l));
               break;
        case 4:printf("Enter radius of cylinder : ");
               scanf("%f",&l);
               printf("Enter height of cylinder : ");
               scanf("%f",&h);
               printf("Volume of cylinder : %.2f\n",vol_cylinder(l,h));
               break;
        case 5:printf("Enter radius of cone : ");
               scanf("%f",&l);
               printf("Enter height of cone : ");
               scanf("%f",&h);
               printf("Volume of cone : %.2f\n",vol_cone(l,h));
               break;
        default:printf("Wrong choice");
                break;
    }
}

//returns volume of cube
float vol_cube(float a)
{
    float volume=a*a*a;
    return volume;
}

//returns volume of cuboid
float vol_cuboid(float l,float b,float h)
{
    float volume=l*b*h;
    return volume;
}

//returns volume of sphere
float vol_sphere(float r)
{
    float volume=PI*pow(r,3);
    return volume;
}

//returns volume of cylinder
float vol_cylinder(float r,float h)
{
    float volume=PI*pow(r,2)*h;
    return volume;
}

//returns volume of cone
float vol_cone(float r,float h)
{
    float volume=1/3.0*PI*pow(r,2)*h;
    return volume;
}