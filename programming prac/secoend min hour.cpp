#include<stdio.h>
int main()
{
	int s, m, h;
	scanf("%d",&s);
	h=s/3600;
	m=(s%3600)/60;
	s=s-((h*3600)+(m*60));
	printf("hour is %d\n minute is %d\n secoend is %d",h,m,s);
}
