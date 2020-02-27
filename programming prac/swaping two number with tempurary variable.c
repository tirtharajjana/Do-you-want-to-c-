#include<stdio.h>
int main()
{
	int num1,num2,temp;
	scanf(" %d %d",&num1,&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("Now num1 is %d\n num2 is %d",num1, num2);
}
