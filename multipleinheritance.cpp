#include<iostream>
using namespace std;
class base
{
	public:
		void a()
		{
			cout<<"a";
		}
};
class base1
{
	public:
		void b()
		{
			cout<<"b";
		}
};
class derived:public base,public base1
{
	public:
		void c()
		{
			cout<<"c";
		}
};
int main()
{
	derived obj;
	obj.a();
	obj.b();
	obj.c();
	return 0;
}
