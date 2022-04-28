#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_SIZE 100
char string1[MAX_SIZE];
int main()
{
    printf("Enter string : ");
               fgets(string1,MAX_SIZE,stdin);
               printf("%ld",strlen(string1));
    if(strcmp(string1,"\0")==0)
    printf("Null\n");
    else
    printf("Not null\n");
    return 0;
}