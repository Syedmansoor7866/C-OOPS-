#include<iostream>
using namespace std;
class count
{
	int value;
	public:
		count():value(9)
		{
			
		}
		void operator ++()
		{
			++ value;
		}
		void display()
		{
			cout<<value;
		}
};
int main()
{
	count man;
	++man;
	man.display();
	return 0;
}
