/* C program to check if a string is palindrome or not */
/*          Note : Case Sensitive                      */

#include<stdio.h>
#include<string.h>

//declaring maximum size of array using macro
#define MAX_SIZE 50

//main function
int main()
{
    char str[MAX_SIZE];
    printf("Enter a string : ");
    scanf("%s",str);
    int length=strlen(str);
    char reverse[length];
    for(int i=0;i<length;i++)
    {
        reverse[i]=str[length-i-1];
    }
    if(strcmp(str,reverse)==0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}