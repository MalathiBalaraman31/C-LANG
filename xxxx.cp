#include<iostream>
using namespace std;
int main()
{
	int a=10,b=5,c;
	cout<<"enter a value";
	switch(3)
	{
		case 1:
			c=a+b;
			cout<<"add is:\n"<<c;
			break;
		case 2:
			c=a-b;
			cout<<"sub is :\n"<<c;
			break;
		case 3:
			c=a*b;
			cout<<"mul is :\n"<<c;
			break;
		default:
			cout<<"invalid value";
			break;		
	}
}
