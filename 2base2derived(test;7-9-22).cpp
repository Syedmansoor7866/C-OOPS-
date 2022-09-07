#include<iostream>
using namespace std;
class base1
{
	public:
		void a()
		{
			cout<<"a";
		}
};
class base2
{
	public:
		void b()
		{
			cout<<"b";
		}
};
class derived1:public base1
{
	public:
		void c()
		{
			cout<<"c";
		}
};
class derived2:public base1,public base2
{
	public:
		void d()
		{
			cout<<"d";
		}
};
int main()
{
	derived1 obj1;
	derived2 obj2;
	obj1.c();
	obj1.a();
	obj2.d();
	obj2.a();
	obj2.b();
	return 0;
}
