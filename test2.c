#include<stdio.h>
void main()
{
 int n;
 printf("Enter any no :");
 scanf("%d",&n);
 switch(n)
 {
  case 0:printf("0");
  break;
  case 1:printf("1");
  break;
  case 2:printf("2");
  break;
  default:printf("Wrong key");
  break;

 }
}
