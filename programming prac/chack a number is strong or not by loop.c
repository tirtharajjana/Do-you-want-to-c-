#include<stdio.h>
int main()
{
	int num,r,sum1=1,sum2=0;
	scanf("%d",&num);
	int n=num;
	for(n;n!=0;)
	{
	r=n%10;
	for(r;r>0;r--)
	{
		sum1=sum1*r;
	}
	sum2=sum2+sum1;
	n=n/10;
	sum1=1;
	
	}
	if(sum2==num)
	{
		printf("%d is STRONG NUMBER",num);
		
	}
	else
	{
		printf("%d is not STRONG NUMBER",num);
	}
}
