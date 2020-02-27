#include<stdio.h>
int main()
{
	int a,i=1,large=-9999;
	while(i<=6)
	{
		scanf("%d",&a);
		large=a>large?a:large;
		i++;
		
	}
	printf("%d",large);
}
