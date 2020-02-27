#include<stdio.h>
int main()
{
	int num,b,c=1,e;
	scanf("%d",&num);
	e=num;
for(int a=2;a<num;a++)
	{
		b=e%a;
		if(b==0)
		{
			c=0;
			break;
		}
		
	}
	if(c==1)
	{
		printf("%d is prime",e);
	}
}
