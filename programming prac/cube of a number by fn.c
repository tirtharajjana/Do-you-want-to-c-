#include<stdio.h>
int cube();
int main()
{


	int x=cube();
	printf("%d",x);
}
int cube()
{
	int num;
   	scanf("%d",&num);
   	int c=(num*num*num);
   	return c;
}
