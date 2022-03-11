#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  FILE *file=fopen("Test.txt","a");
  if(!file)
  {
      printf("Unable to create file\n");
      return 1;
  }
     
  char* name=malloc(sizeof(char)*5);
  char* number=malloc(sizeof(char)*5);
  printf("Enter name :");
  scanf("%s",name);
  printf("Enter number :");
  scanf("%s",number);
  fprintf(file,"%s,%s\n",name,number);
  fclose(file);
  free(name);
  free(number);
  
  return 0;

}