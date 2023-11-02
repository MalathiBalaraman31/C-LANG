#include<stdio.h>
int main()
{
	int i,array[]={2,3,4,5,6,7,8,9,10,11};
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			printf("even  %d",array[i]);
		}
		else 
		{
			printf("odd %d\n",array[i]);	
		}
	}
	return 0;
}
