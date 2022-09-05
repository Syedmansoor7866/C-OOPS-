#include<iostream>
int main()
{
	int a,b,c;
	a=5;
	b=7;
	c=9;
	if(a>b && a>c)
	{
		std::cout<<"a is greater";
	}
	else if(b>a && b>c)
	{
		std::cout<<"b is greater";
	}
	else
	{
		std::cout<<"c is greater";
	}
}
