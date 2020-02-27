#include<stdio.h>
#include<math.h>
int main()
{
	long long int binary,sum=0;
	int r,n;
	scanf("%lld",&binary);
	long long int a=binary;
	for(a;a!=0;)
	{
		if(a%10==1)
		{
			sum=sum+pow(2,n);
		}
		n++;
		a=a/10;
		
	}
	printf("%d",sum);
	
}
