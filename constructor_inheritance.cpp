#include<iostream>
using namespace std;

class animal{
	public: 
	int legs =4;
	animal()
	{
		cout << "base default constructor" <<endl;
	}
};

class dog : public animal
{
	int tail =1;
	public:
	dog()
	{
		cout << "Derived default constructor" <<endl;
	}

	dog(int i)
	{
		cout << "Derived parameterized constructor" <<endl;
	}
};

int main()
{
	animal a1;
	dog d1;
	dog d2(10);
	return 0;
}

