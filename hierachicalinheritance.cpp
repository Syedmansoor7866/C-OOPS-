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
class derived:public base
{
	public:
		void b()
		{
			cout<<"b";
		}
};
class derived1:public base
{
	public:
		void c()
		{
			cout<<"c";
		}
};
class derived2:public base
{
	public:
		void d()
		{
			cout<<"d";
		}
};
int main()
{
	derived2 obj1;
	derived1 obj2;
	derived obj3;
	obj1.a();
	obj1.d();
	obj2.a();
	obj2.c();
	obj3.a();
	obj3.b();
	return 0;
}
