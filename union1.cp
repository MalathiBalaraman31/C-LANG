#include<stdio.h>
#include<conio.h>
#include<stdio.h>
union Data
{
	int i;
	float f;
	char str[20];
};
int main()
{
	union Data data;
	data.i=10;
	printf("data i:%d\n",data.i);
	data.f=22.5;
	printf("data f :%f\n",data.f);
	return 0;
}
