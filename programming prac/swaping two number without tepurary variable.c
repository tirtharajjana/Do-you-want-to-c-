#include<stdio.h>
int main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("Now the n1 is %d\nthe n2 is %d",n1,n2);
}
