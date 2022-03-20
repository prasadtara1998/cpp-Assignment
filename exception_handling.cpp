#include<iostream>
using namespace std;



int main()
{
	int m,n,result;
	cout<<"Enter two numbers";
	cin >> m>>n;

	try
	{
		if(n==0)
		throw n;
	
		else
		{
			result = m/n;
			cout<<"\nThe result is:"<<result;
		}
	}

	catch(int x)
	{
		cout<<"\nCan't divide by: "<<x;
	}
	cout<<"\n End of program";
return 0;
}
