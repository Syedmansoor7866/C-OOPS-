#include<iostream>
using namespace std;
class degree
{
	public:
		void getdegree()
		{
			cout<<"i got a degree";
		}
};
class undergraduate:public degree
{
	public:
		void under()
		{
			cout<<"i am an undergraduate";
		}
};
class postgraduate:public degree
{
	public:
		void under()
		{
			cout<<"i am a postgraduate";
		}
};
int main()
{
	undergraduate obj1;
	postgraduate obj2;
	obj1.under();
	obj1.getdegree();
	obj2.getdegree();
	obj2.under();
	return 0;
}
