#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	(year%4 == 0 && year%100 != 0 ) ? printf("Leap year") : (year%400==0) ? printf("Leap year") : printf("Common year");
}
