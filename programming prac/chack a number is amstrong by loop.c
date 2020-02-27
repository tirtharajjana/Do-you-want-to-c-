#include<stdio.h>
int main()
{
	int num,c=0,r,sum=0;
	scanf("%d",&num);
	int a=num;
	int b=num;
	for(a;a!=0;)
	{
		c++;
		a=a/10;
	}
	while(b!=0)
	{
		r=b%10;
		sum=sum+pow(r,c);
		b=b/10;
	}
	if(sum==num)
	{
		printf("%d is amstrong num",num);
		
	}
	else
	{
		printf("%d is not amstrong num",num);
	}
}
