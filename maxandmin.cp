#include<stdio.h>
#include<conio.h>
int main()
{
	int a=100,b=20,c=50;
	if(a>=b&&a>=c)
	{
		printf("A is maximum %d\n",a);
	}
	else
	{
		printf("A is minimum %d\n",a);
	}
	if(b>=a&&b>=c)
	{
		printf("B is maximum %d\n",b);
	}
	else
	{
		printf("B is minimum %d\n",b);
	}
	if(c>=a&&c>=b)
	{
		printf("c is maximum %d\n",c);
	}
	else
	{
		printf("c is minimum %d\n",c);
	}
	return 0;
}