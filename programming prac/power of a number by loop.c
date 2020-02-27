#include<stdio.h>
int main()
{
	int a,b,r=1,i=1;
	scanf("%d%d",&a,&b);
	for(i;i<=b;i++)
	{
		r=r*a;
	}
	printf("%d",r);
}

