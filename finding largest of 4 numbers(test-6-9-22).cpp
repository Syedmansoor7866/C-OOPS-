#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	a=5;
	b=6;
	c=10;
	d=8;
	if(a>b && a>c && a>d)
	{
		cout<<"a is greater";
	}
	else if(b>a && b>c && b>d)
	{
		cout<<"b is greater";
	}
	else if(c>a && c>b && c>d)
	{
		cout<<"c is greater";
	}
	else
	{
		cout<<"d is greater";
	}
}
