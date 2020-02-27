#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("%c is vowels.",ch);
		
	}
	else
	{
		printf("%c is consonent",ch);
	}
}
