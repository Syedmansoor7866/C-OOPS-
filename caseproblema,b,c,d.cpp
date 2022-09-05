#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	a=5;
	b=6;
	cout<<"enter your case";
	cin>>c;
	switch(c)
	{
		case 1:
			d=a+b;
			cout<<d;
			break;
		case 2:
			d=a-b;
			cout<<d;
			break;
		default:
			cout<<"invalid choice";
			break;
	}
}
