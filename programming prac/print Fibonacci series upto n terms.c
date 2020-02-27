#include<stdio.h>
int main()
{
	int num,a=0,b=1,sum=1;
	scanf("%d",&num);
	for(a,b;a<=num;)
	{
		printf("%d ",a);
		sum=a+b;
		a=b;
		b=sum;
	}
}
