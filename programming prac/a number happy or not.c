#include<stdio.h>
int main()
{
	int num,r;
	scanf("%d",&num);
	int sum=0;
	int a=num;
	for(a;a!=1&&a!=4;)
	{
		while(a>0)
		{
			r=a%10;
			sum=sum+(r*r);
			a=a/10;
		}
		a=sum;
		sum=0;
		
	}
	if(a==1)
	{
		printf("%d is happy",num);
	}
}
