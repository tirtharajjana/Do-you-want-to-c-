#include<stdio.h>
int main()
{
	int a,b,c,x,y;
	scanf("%d %d %d",&a,&b,&c);
	x=a>b?a:b;
	y=x>c?x:c;
	printf("The large number is %d ",y);
	
}
