/* C program to check if a string is palindrome or not */
/*          Note : Case Sensitive                      */

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

//declaring maximum size of array using macro
#define MAX_SIZE 50

//main function
int main()
{
    char str[MAX_SIZE];
    bool isPalindrome=true;
    printf("Enter a string : ");
    scanf("%s",str);
    int length=strlen(str);
    for(int i=0;i<length;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            isPalindrome=false;
            break;
        }
    }
    if(isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}