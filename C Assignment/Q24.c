#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX_SIZE 50
int main()
{
    char str[MAX_SIZE];
    printf("Enter a string : ");
    scanf("%s",str);
    int length=strlen(str);
    char reverse[length];
    for(int i=0;i<length;i++)
    {
        //str[length-i-1]=tolower(str[length-i-1]);
        reverse[i]=str[length-i-1];
    }
    if(strcmp(str,reverse)==0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}