#include<iostream>
using namespace std;

class Test
{
	int x;
	public:
	void read()
	{
		cout<<"Enter a number";
		cin>>x;
	}
	class EVEN{}; // empty class
	class ODD{};
	void check()
	{
		if(x%2==0)
			throw EVEN();
		else
			throw ODD();
	}
};
int main()
{
	Test ob;
	ob.read();
	try
	{
		ob.check();	
	}
	catch(Test::EVEN)
	{
		cout<<"Number is even\n";
	}

	catch(Test::ODD)
	{
		cout<<"Number is odd\n";
	}
return 0;
}
