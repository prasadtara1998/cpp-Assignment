#include<iostream>
using namespace std;

class divide
{
	private:
		int *x;
		int *y;

	public:
	divide()
	{
		x= new int();
		y = new int();
		cout<<"Enter two numbers";
		cin >> *x>>*y;

		try
		{
			if(*y == 0)
			{
				throw *x;
				
			}
		}

		catch(int)
		{
			delete x; delete y;
			cout<<"Second number cannot be zero!"<<endl;
			throw;
		}
	}
	/*~divide()
	{
		try
		{
			delete x; delete y;

		}
		catch(...)
		{
			cout<<"Error while deallocating memory"<<endl;
		}
	}*/
	float division()
	{
		return (float)*x / *y;
	}
};

int main()
{
	try
	{
		divide d;
		float res = d.division();
		cout<<"Result of division is : "<<res;
	}
	catch(...)
	{
		cout<<"Unknown exception!"<<endl;
	}
return 0;
}
