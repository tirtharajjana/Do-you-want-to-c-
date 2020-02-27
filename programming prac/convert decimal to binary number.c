#include<stdio.h>
int main()
{
	long long int decimal,binary=0,place=1;
	int r;
	scanf("%lld",&decimal);
	long long int a=decimal;
	for(a;a!=0;)
	{
		r=a%2;
		binary=(r*place)+binary;
		place=place*10;
		a=a/2;
	}
	printf("binary of %d is %d",decimal,binary);
}
