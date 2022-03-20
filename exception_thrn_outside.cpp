#include<iostream>
using namespace std;

void Xtest(int test)
{
	cout<< "Inside Xtest,test is: "<< test<<"\n";
	if(test)throw test;
}

int main()
{
	cout<<"start\n";
	try
	{
		cout<<"Inside try block\n";
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}
	catch (int i)
	{
		cout<<"caught an exception --value is: ";
		cout << i<<"\n";
	}
	cout<<"End";
	return 0;
}
