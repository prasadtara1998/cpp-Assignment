#include<iostream>
using namespace std;

class animal{
	public: 
	int legs =4;
	void d1()
	{
		cout << "inside class animal" <<endl;
	}
};

class dog : public animal
{
	public:
	int tail =1;
	void d2()
	{
		cout << "inside class dog" <<endl;
	}
};

class pupies : public animal
{
	public:
	int child =2;
	void d3()
	{
		cout << "inside class pupies" <<endl;
	}
};

class lion : public dog,public pupies
{
	public:
	int king =1;
	void d4()
	{
		cout << "inside class lion" <<endl;
	}
};

int main()
{
	animal a1;
	dog d;
	pupies p1;
	lion l1;
	//l1.d1();
	l1.d2();
	l1.d3();
	l1.d4();
	d.d1();
	p1.d1();
	//d.d4();
	//p1.d4();

	return 0;
}

