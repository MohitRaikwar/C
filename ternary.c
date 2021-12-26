#include<stdio.h>
void main()
{
  int x,y,max;
  printf("Enter first no. :");
  scanf("%i",&x);
  printf("Enter second no. :");
  scanf("%i",&y);
  max=(x>y)?x:y;
  printf("Maximum no is :%i",max);
}
