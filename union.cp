#include<stdio.h>
#include<conio.h>
#include<string.h>
union Data
{
	int id;
	char name[20];
	float percentage;
};
int main()
{
	union Data data;
	printf("memory of data :%d\n",sizeof(data));
}
