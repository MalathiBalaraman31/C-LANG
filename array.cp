#include<stdio.h>
#include<conio.h>
#define size 5
int main()
{	
	int i,array[5];
	printf("enter 5 integers");
	for(i=0;i<size;i++)
	scanf("%d",&array[i]);
	for(i=0;i<5;i++)
	{
		printf("integer %d\n %d\n",i+1,array[i]);
	}
	return 0;
} 


