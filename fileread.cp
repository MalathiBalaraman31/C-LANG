#include<stdio.h>
#include<string.h>
int main()
{
FILE*fptr;
char name[10]="mals";
int age=20;
float salary=20000;
fptr=fopen("test.text","r");
if(fptr==NULL)
{
	printf("file does not exist");
	return 0;
}
printf("name",&name);
printf("age",&age);
printf("salary",&salary);
return 0;
}

