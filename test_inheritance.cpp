#include<iostream>
using namespace std;

class animal{
	protected:
	int m,n;
	public: 
	void set (int a, int b)
	{
		m = a;
		n = b;
	}
	void show ()
	{
		cout << m << " " << n;
	}
};

class dog : private animal
{
	int o;
	public:
	dog (int x)
	{
		o = x;
	}
	void showk()
	{
		cout << o <<endl;
	}
};

class pupies : public dog
{
	int i;
	public:
	void setm ()
	{
		i = m-n;
	}
	void showm()
	{
		cout << i <<"\n";
	}
};
int main()
{
	
	dog d1;
	pupies p1
	d1.set(1,2);
	d1.show();
	p1.set(3,4);
	p1.show();
	return 0;
}

