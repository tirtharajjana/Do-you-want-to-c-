#include<stdio.h>
int main()
{
	int num1,num2,c=0,r,sum=0;
	scanf("%d%d",&num1,&num2);
	for(num1,num2;num1<=num2;num1++)
	{
	 c=0;
	sum=0;   
	
	int a=num1;
	int b=num1;
	
	for(a;a!=0;)
	{
		c++;
		a=a/10;
	}
	while(b!=0)
	{
		r=b%10;
		sum=sum+ pow(r,c);
		b=b/10;
	}
	if(sum==num1)
	{
		printf("%d\n",num1);
		
	}
	
}
	
}
