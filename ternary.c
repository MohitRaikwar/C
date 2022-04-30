#include<stdio.h>
void main()
{
  int x,y,max;
  printf("Enter first no. :");
  scanf("%d",&x);
  printf("Enter second no. :");
  scanf("%d",&y);
  max=(x>y)?x:y;
  printf("Maximum no is :%d",max);
}
