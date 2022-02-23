//Create a class Distance having data members feet and inch. Create parameterized constructor to initialize members feet and inch.

#include<iostream>
using namespace std;

class Distance
{
	int feet,inch;

	public:
	Distance(int x, int y)
	{
		feet= x;
		inch=y;
		cout<<"feet="<<feet<<"\n"<<"Inch="<<inch<<endl;
	}
};

int main()
{
	Distance d1(5,7);
}
