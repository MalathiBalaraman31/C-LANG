#include<stdio.h>
#include<conio.h>
int main()
{
	char key;
	printf("Enter the keys:\n");
	while(1){
		scanf("%c",&key);
		if(key=='E'||key=='e')
		break;
	}
	printf("goodbye");
	getch();
}