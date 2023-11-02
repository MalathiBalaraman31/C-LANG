#include<stdio.h>
void areaoftriangle(int*base,int*height)
{
	printf("enter base");
	scanf("%d",&base);
	printf("enter height");
	scanf("%d",&height);
}
int main()
{
	int area;
	area=1/2*base*height;
	int base[50];
	int height[50];
	areaoftriangle(base,height);
	printf("area is %d",area);
	return 0;
}
