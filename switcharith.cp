#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,ch;
	printf("enter a,b values");
	scanf("%d%d%d",&a,&b,&c);
	printf("enter your choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:c=a+b;
		printf("add",c);
		break;
		
		case 2:c=a-b;
		printf("sub",c);
		break;
		
		default:printf("enter a valid value");
	}
}