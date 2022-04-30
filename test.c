#include<stdio.h>
int digitcalc(long int);
int cardtype(long int);
int firsttwo(long int);
void main()
{
long int i;
 printf("Enter card no :");
 scanf("%li",&i);
 printf("%li",i);
 printf("\nNo. of digits :%d",digitcalc(i));
 printf("\nType:%d",cardtype(i));
}
int cardtype(long int n)
{
  int f=firsttwo(n);   // Find first two digits
  if(digitcalc(n)==15) //For American Express Card
  {

  if(f==34||f==37)
  return 1; // 1 for American Express Card

  }
  else if(digitcalc(n)==16)
  {
  //for Master Card
  if(f==51||f==52||f==53||f==54||f==55)
  {
   return 2; // 2 for Master Card
  }
  int visa =f/10;
  if(visa==4)
  {
   return 3; //3 for Visa card
  }
  else
  return 0;
  }
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
