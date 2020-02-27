#include<stdio.h>
int main()
{
	int a,pos=0,neg=0,zero=0;
	scanf("%d",&a);
	while(a!=-1);
	{
		if(a>0)
		{
			pos++;
		}
		else if(a<0)
		{
			printf("%d",a);
			neg++;
			
		}
		else
		{
			zero++;
		}
		scanf("%d",&a);
	}
}
