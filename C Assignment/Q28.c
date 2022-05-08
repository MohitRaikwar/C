#include<stdio.h>

int main()
{
    int day,month,year;
	char *m[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("Enter date(DD/MM/YYY): ");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("%d",day);
	switch(day)
	{
		case 1:printf("st ");
				break;
		case 21:printf("st ");
				break;
		case 31:printf("st ");
				break;
		case 2:printf("nd ");
			   break;
		case 22:printf("nd ");
			   break;
		case 3:printf("rd ");
			   break;
		case 23:printf("rd ");
			   break;
		default:printf("th ");
				break;
	}
	printf("%s, %d\n",m[month-1],year);
    return 0;
}