#include<stdio.h>
int main()
{
	int n ,r=0,a;
	scanf("%d",&n);
	for(n;n!=0;)
	{
		a=n%10;
		n=n/10;
		r=((r*10)+a);
	}
	printf("%d",r);
}
