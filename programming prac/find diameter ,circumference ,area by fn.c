#include<stdio.h>
#include<math.h>
int dia();
float car();
float area();
int main()
{
	int x=dia();
	float y=car();
	float z=area();
	printf("%d\n%.2f\n%.2f",x,y,z);
}
int dia()
{
	int r;
	scanf("%d",&r);
	return (2*r);
}
float car()
{
	int r;
	return (2*M_PI*r);
}
float area()
{
	int r;
	return (M_PI*r*r);
}
