#include<stdio.h>
int main()
{
	int i,array[]={2,3,4,5,6,7,8,9,10,11};
	for(i=0;i>2;i++)
	{
		if(i%2==0)
		{
			printf("even %d\n %d\n %d\n %d\n %d\n",array[i]);
		}
		else
		{
			printf("odd %d\n %d\n %d\n %d\n %d\n",array[i]);	
		}
	}
	return 0;
}
