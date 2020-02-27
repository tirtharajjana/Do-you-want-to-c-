#include<stdio.h>
int max();
int main()
{
	int x=max();
	printf("%d",x);
}
int max()
{
	int a,b ;
	scanf("%d %d",&a,&b);
	return (a>b)?a:b ;
}

