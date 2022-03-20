#include<iostream>
using namespace std;

class base{};
class derived : public base{};

int main()
{
	try
	{
		throw derived();
	}
	
	
	catch(derived d)
	{
		cout<<"derived object caught\n";
	}
	catch(base b)
	{
		cout<<"Base object caught\n";
	}
}
