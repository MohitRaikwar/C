#include<stdio.h>

int main()
{
    int day,month,year;
    printf("Enter day : ");
    scanf("%d",&day);
    printf("Enter month : ");
    scanf("%d",&month);
    printf("Enter year : ");
    scanf("%d",&year);
    switch(month)
    {
        case 1:printf("%dth January %d",day,year);
               break;
        case 2:printf("%dth January %d",day,year);
               break;
        case 3:printf("%dth January %d",day,year);
               break;
        case 4:printf("%dth January %d",day,year);
               break;
        case 5:printf("%dth January %d",day,year);
               break;
        case 6:printf("%dth January %d",day,year);
               break;
    }
    return 0;
}