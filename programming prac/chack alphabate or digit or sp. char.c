#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("This is alphabate");
		
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("This is digit");
		
	}
	else
	{
		printf("This is special character");
	}
}
