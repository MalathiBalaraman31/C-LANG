#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	int id;
	char name[20];
	float percentage;
};
void func(student*record);
int main()
{
	struct student record;
	record.id=1;
	strcpy(record.name,"raju");
	record.percentage=81.66;
	func(&record);
	return 0;
}
void func(student*record)
{
	printf("id is %d\n",record->id);
	printf("name is %s\n",record->name);
	printf("percentage is %f\n",record->percentage);
}
