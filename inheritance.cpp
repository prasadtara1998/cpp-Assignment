#include<iostream>
using namespace std;

class animal{
	public: 
	int legs =4;
	void display_legs()
	{
		cout << "inside base class" <<endl;
	}
};

class dog : public animal
{
	public:
	int tail =1;
	void display_tail()
	{
		cout << "inside derived class" <<endl;
	}
};

class pupies : public dog
{
	public:
	int child =2;
	void display_child()
	{
		cout << "multilevel inheritance" <<endl;
	}
};
int main()
{
	animal a1;
	dog d1;
	pupies p1;
	a1.display_legs();
	d1.display_tail();
	p1.display_child();
	//a1.display_tail();
	d1.display_legs();
	p1.display_legs();
	return 0;
}

