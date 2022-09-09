#include<iostream>
using namespace std;
class mammals
{
	public:
		void a()
		{
			cout<<"i am a mammal";
		}
};
class marineanimal:public mammals
{
	public:
		void b()
		{
			cout<<"i am a marineanimal";
		}
};
class bluewhale:public mammals
{
	public:
		void c()
		{
			cout<<"i am belongs to both categories";
		}
};
int main()
{
	bluewhale obj1;
	marineanimal obj2;
	obj1.a();
	obj1.c();
	obj2.a();
	obj2.b();
	return 0;
}
