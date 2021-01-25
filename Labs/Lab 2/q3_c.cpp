#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Grid Size: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<"+-----";
		}
		cout<<"+"<<endl;
		for(int j=1;j<=3;j++)
		{
			for(int k=1;k<=n;k++)
			{
				cout<<"|     ";
			}
			cout<<"|"<<endl;
		}
	}
	for(int j=1;j<=n;j++)
		{
			cout<<"+-----";
		}
		cout<<"+"<<endl;
	return 0;
}