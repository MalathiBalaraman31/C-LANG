#include<stdio.h>
void HMS(char*name,char*phone,char*disease)
{
	printf("enter name :");
	scanf("%s",&name);
	printf("enter phone:");
	scanf("%s",&phone);
	printf(" enter disease :");
	scanf("%s",&disease);
}
int main()

{
	char name[50];
	char phone[50];
	char disease[50];
	HMS(name,phone,disease);
	printf("%s",&disease);
	return 0;
}
