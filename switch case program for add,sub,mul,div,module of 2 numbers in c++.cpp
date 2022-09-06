#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter first value";
	cin>>a;
	cout<<"enter the second value";
	cin>>b;
	cout<<"enter the choice";
	cin>>c;
	switch(c)
	{
		case 1:
			d=a+b;
			cout<<"addition= "<<d;
			break;
		case 2:
			d=a-b;
			cout<<"subtraction= "<<d;
			break;
		case 3:
			d=a*b;
			cout<<"multiplication= "<<d;
			break;
		case 4:
			d=a/b;
			cout<<"division= "<<d;
			break;
		case 5:
			d=a%b;
			cout<<"module= "<<d;
			break;
		default:
			cout<<"invalid choice";
			break;
	    return 0;
	}
}
