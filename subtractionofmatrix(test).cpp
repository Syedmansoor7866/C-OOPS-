#include<iostream>
using namespace std;
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	cout<< "provided first matrix"<< endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin >> a[i][j];
		}
	}
	cout<< "provided second matrix"<< endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin >> b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]= a[i][j]-b[i][j];
		}
	}
    cout<< "subtraction of two matrix"<< endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j]<<" ";
			
		}
		cout<< endl;
	}	
	
 return 0;	
}
