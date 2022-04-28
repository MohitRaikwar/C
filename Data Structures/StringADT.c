            /* Implementation of String ADT using Array of Characters*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//defining maximum size of array using macro
#define MAX_SIZE 100

//functions prototpye
void strnins(char *s,char *t,int i);
int nfind(char *string,char *pat);

//global string arrays
char string1[MAX_SIZE];
char string2[MAX_SIZE];

//main function
int main()
{
    char pat[MAX_SIZE];
    int choice,index;
    printf("1.Create a null string.\n");
    printf("2.Insert a string into another string at ith position.\n");
    printf("3.Pattern find using strstr function\n");
    printf("4.Pattern matching using nfind method.\n");
    printf("5.Check whether string is null or not.\n");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:strcpy(string1,"");
               printf("Successfully created null string\n");
               break;
        case 2:printf("Enter string1 : ");
               scanf("%s",string1);
               printf("Enter string you want to insert in string1 : ");
               scanf("%s",string2);
               printf("Enter index to insert at : ");
               scanf("%d",&index);
               strnins(string1,string2,index);
               printf("After insertion : %s\n",string1);
               break;
        case 3:printf("Enter string : ");
               scanf("%s",string1);
               printf("Enter pattern :");
               scanf("%s",pat);
               if((t=strstr(string1,pat)))
                    printf("The string from strstr is : %s\n",t);
               else
                    printf("The pattern was not found with strstr\n");
                break;
        case 4:printf("Enter string : ");
               scanf("%s",string1);
               printf("Enter pattern :");
               scanf("%s",pat);
               if(nfind(string1,pat)==-1)
                    printf("Pattern not found\n");
               else
                    printf("Pattern found at index : %d",nfind(string1,pat));
               break;
        case 5:printf("Enter string : ");
               scanf("%s",string1);
               if(strcmp(string1,"\0")==0)
                    printf("String is null\n");
               else
                    printf("String is not null\n");
                break;
        default:printf("Wrong choice\n");
                break;
        }
    return 0;
}

//inserts string t in string s at ith index
void strnins(char *s,char *t,int i)
{
    char string[MAX_SIZE],*temp=string;

    //checks if user wants to insert outside the bounds of string
    if(i<0 || i>strlen(s))
    {

        fprintf(stderr,"Position is out of bounds \n");
        exit(EXIT_FAILURE);
    }

    //if s string is null then copy t string as it is
    if(!strlen(s))
        strcpy(s,t);
    else if(strlen(t))
    {
        //first copies i characters from s in temp
        strncpy(temp,s,i);
        //concatenates string t to temp
        strcat(temp,t);
        //then concatenates characters in s from ith index
        /* s is basically a pointer holding address of s[0]
         s+i is equivalent to &s[0]+i */
        strcat(temp,(s+i));
        strcpy(s,temp);
    }
}

//pattern matching using nfind
int nfind(char *string,char *pat)
{
    int i,j,start=0;
    int lasts=strlen(string)-1;
    int lastp=strlen(pat)-1;
    int endmatch=lastp;

    for(i=0;endmatch<=lasts;endmatch++,start++)
    {
        if(string[endmatch]==pat[lastp])
            for(j=0,i=start;j<lastp && string[i]==pat[j];i++,j++);

        if(j==lastp)
            return start;
    }
    return -1;
}