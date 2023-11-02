#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,operations;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	switch(operations)
	{
	
        case '+':	
			printf("Add:%d",a,b,a+b);
			break;
		case '-':
			printf("Sub:%d",a,b,a-b);
			break;
		case '*':
			printf("Multiplication:%d",a,b,a*b);
			break;
		case '/':
			printf("Division:%d",a,b,a/b);
			break;
		case '%':
			printf("Modulus:%d",a,b,a%b);
			break;
		default:
			printf("enter a valid value");
    }
	return 0;
}
