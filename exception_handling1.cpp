#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cout<<"Enter two numbers";
	cin >> m>>n;
	//cout << m << "  " << n << endl;

	try
	{
		if(n!=m)
		{
			float div = (float)m/n;
			if(div<0)			
				throw 'e';
			cout<<"m/n="<<div;
		}
		else
		{
			//cout<< "tst " << endl;
			throw n;
		}
	}

	catch(int e)
	{
		cout<<"\nException:Division by zero";
	}
	catch(char st)
	{
		cout<<"\nException:Division is less than 1";
	}
	catch(...)
	{
		cout<<"\nException:unknown";
	}
return 0;
}
