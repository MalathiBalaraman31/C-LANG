#include<stdio.h>
int main()
{
FILE*fptr;
char name[20];
int age;
float salary;
fptr=fopen("test.text","w");
if(fptr==NULL)
{
	printf("file does not exist");
	return 0;
}
printf("enter the name");
scanf("%s",&name);
printf("enter age ");
scanf("%d",&age);
printf("enter salary");
scanf("%f",&salary);
return 0;
}


