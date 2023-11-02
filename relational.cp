#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10,b=20,c=30;
	if((a>b)&&(a>c))
	{
		printf("a is greater %d\n",a);
	}
	else if((b>a)&&(b>a))
	{
		printf("b is greater %d\n",b);
	}
	else if((c>a)&&(c>b))
	{
		printf("c is greater %d\n",c);
	}
	else 
	{
		printf("enter a valid value\n");
	}
	if((a<b)&&(a<c))
	{
		printf("a is lesser %d\n",a);
	}
	else if((b<a)&&(b<c))
	{
		printf("b is lesser %d\n",b);
	}
	else if((c<a)&&(c<b))
	{
		printf("c is lesser %d\n",c);
	}
	else
	{
		printf("enter a valid value\n");
	}
	return 0;
}