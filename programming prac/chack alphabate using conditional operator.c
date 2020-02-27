#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	(ch<='a' &&ch>='z')||(ch<='A'&&ch>='Za')?printf("IT IS ALPHABATE"):printf("It is not an alphabate");
}
