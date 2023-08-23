#include<stdio.h>
main()

{
	int number_of_day, year, month, days;
	
	printf("Enter number of days: ");
	scanf("%d", &number_of_day);
	
	/* calculating years*/
	year = number_of_day / 365;
	
	/* calculating months */
	month = (number_of_day - year *365) / 30;
	
	/* calculating days */
	days = (number_of_day - year * 365 - month*30);
	
	printf("year = %d\n", year);
	printf("month = %d\n", month);
	printf("days = %d\n", days);
	
	
}
