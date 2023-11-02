#include<stdio.h>
int main()
{
	int a,b,total;
	double avg;
	printf("enter a value ");
	scanf("%d",&a);
	printf("enter b value ");
	scanf("%d",&b);
	total=a+b;
	avg=(double)total/2;
	printf("avg value is %f\n",avg);
	return 0;
}
