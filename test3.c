#include<stdio.h>
int digitcalc(long int);
void main()
{
long int i;
 printf("Enter card no :");
 scanf("%li",&i);
 printf("%li",i);
 printf("\nNo. of digits :%i",digitcalc(i));
 printf("\nFirst two:%i",firsttwo(i));
}
int firsttwo(long int n)
{
while(digitcalc(n)>2)
  {
   n/=10;
  }
  return n;

}
int digitcalc(long int n)
{
  int count=0;
  while(n!=0){
     n/=10;
     count++;

  }
  return count;
}
