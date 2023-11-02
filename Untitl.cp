#include<stdio.h>
#include<conio.h>
int main()
{
	int SI,p,r,t;
	printf("enter p value");
	scanf("%d",&p);
	printf("enter r value");
	scanf("%d",&r);
	printf("enter t value");
	scanf("%d",&t);
	SI=p*r*t;
	if(SI>50)
	{
		printf("Timeperiod:5 months");
	}
	else if(SI>40)
	{
		printf("Timeperiod:4 months");
	}
	else if(SI>30)
	{
		printf("Timeperiod:3 months");
	}
	else if(SI>20)
	{
		printf("Timeperiod: 2 months");
	}
	else
	{
		printf("Timeperiod: 1 month");
	}
	return 0;
}