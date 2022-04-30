#include<stdio.h>

int main()
{
    int day,month,year;
    printf("Enter date(DD/MM/YYY): ");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("%d",day);
    if(day == 1 || day == 21 || day == 31)
            printf("st ");
    else if(day == 2 || day == 22)
            printf("nd ");
    else if(day == 3 || day == 23)
            printf("rd ");
    else
            printf("th ");
    switch(month)
    {
       case 1:printf("January %d\n",year);
	       break;
       case 2:printf("February %d\n",year);
	       break;
	case 3:printf("March %d\n",year);
	       break;
	case 4:printf("April %d\n",year);
	       break;
	case 5:printf("May %d\n",year);
	       break;
	case 6:printf("June %d\n",year);
	       break;
	case 7:printf("July %d\n",year);
	       break;
	case 8:printf("August %d\n",year);
	       break;
	case 9:printf("September %d\n",year);
	       break;
	case 10:printf("October %d\n",year);
	       break;
	case 11:printf("November %d\n",year);
	       break;
	case 12:printf("December %d\n",year);
	       break;
	default:printf("invalid Month number.\n");
	       break;
    }
    return 0;
}