#include<stdio.h>
int main(int argc,char* argv[])
{
    if(argc!=2)
    {
        printf("Fewer arguments\n");
        return 1;
    }
    char *name=argv[1];
    printf("Hello %s\n",name);
    return 0;
}