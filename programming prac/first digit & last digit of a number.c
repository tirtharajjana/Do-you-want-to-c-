#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int fd;
	fd=a;
	while(fd>=10)
{
	fd=fd/10;
}
	int ld=a%10;
	printf("first digit is %d",fd);
	printf("\nlast digit is %d",ld);
}
