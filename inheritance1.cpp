#include<iostream>
using namespace std;

class animal{
	public: 
	int legs =4;
	void display_legs()
	{
		cout << "inside class animal" <<endl;
	}
};

class dog
{
	public:
	int tail =1;
	void display_tail()
	{
		cout << "inside class dog" <<endl;
	}
};

class pupies : public animal,public dog
{
	public:
	int child =2;
	void display_child()
	{
		cout << "inside class pupies" <<endl;
	}
};
int main()
{
	animal a1;
	dog d1;
	pupies p1;
	p1.display_child();
	p1.display_legs();
	p1.display_tail();

	return 0;
}

