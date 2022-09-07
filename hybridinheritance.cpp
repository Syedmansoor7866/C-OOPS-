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
class derived2:public derived,public derived1
{
	public:
	    void d()
	    {
		    cout<<"d";
	    }
};
int main()
{
	derived obj;
	derived1 obj1;
	derived2 obj2;
	obj.a();
	obj.b();
	obj1.a();
	obj1.c();
	obj2.b();
	obj2.c();
	obj2.d();
	return 0;
}
