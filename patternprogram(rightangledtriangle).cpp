#include<iostream>
using namespace std;
int main()
{
	int rows,i,j;
	cout<<"enter the no.of rows";
	cin>>rows;
	for(i=1;i<=rows;i+1)
	{
		for(j=1;j<=i;j+1)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
