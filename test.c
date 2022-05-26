#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char *ptr="Hello";
  char a[22];
  strcpy(a,"world");
  printf("\n%s%s",ptr,a);
  return 0;
}

