#include<iostream>
using namespace std;
class area
{
	public:
		void rectangle(int a,int b)
		{
			cout<<"area of rectangle:"<<endl<<a*b;
		}
		void square(int a)
		{
			cout<<"area of square:"<<endl<<a*a<<endl;
		}
};
int main()
{
	area obj1;
	obj1.rectangle(6,8);
	obj1.square(8);
	return 0;
}
