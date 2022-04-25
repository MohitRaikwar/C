#include<stdio.h>
/*#define start main
void start()
{
  while(!printf("Hello"))
  {}
}*/
int main()
{
  int a=5;
  int y= ++a + a++ - a++ + ++a;

  printf("x=%d y=%d",a,y);

  //float b;
  //char c;
  //scanf("%f",&b);
  //scanf("%c",&c);
  //printf("b=%f,c=%c,a=%d",b,c,scanf("%d",&a));
  //printf("|%-2d|%5d|\n",1,2);
  //printf("%#010x\n",14);
  /*int a=10,b=20;
  int c=(((++a && b--)||(a++ + --b) && (b--)));
  printf("%d , %d , %d",a,b,c);*/
   /*int a=544,sum;
   if(a)
      sum=a=a%9==0?9:a%9;
   else
      sum=0;
   printf("%d",sum);*/
   /*float a=0.7;
   float b=0.7;
   if(a>b)
   printf("A is greater than b");
   else if(b>a)
   printf("B is greater than A");
   else
   printf("Both are equal");

      if(0.7f>a)
   printf("Hello");
         else
      printf("There");*/
      return 0;
}