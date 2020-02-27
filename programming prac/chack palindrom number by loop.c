#include<stdio.h>
int main()
{
	int a,r=0,n;
	scanf("%d",&n);
	a=n;
	for(a;a!=0;)
	{
		r=((r*10)+(a%10));
		a=a/10;
	}
	if(r==n){
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
