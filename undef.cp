#include<stdio.h>
#define NUMBER 15
int sq;
sq=NUMBER*NUMBER;
#undefine NUMBER
int main()
{
	printf("%d ",sq);
	return 0;
}
