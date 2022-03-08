#include<iostream>
using namespace std;

class animal{
	private:
	int x = 1;
	protected:
	int y =2;
	public: 
	int z =3;
	
};

class dog : public animal
{
	public:
	void d2()
	{
		//cout << "X= "<< x ;
		cout <<"\nY= "<< y+1 << "\nZ= "<< z+1 <<endl;
	}
};

class pupies : public dog
{
	public:
	void d3()
	{
		//cout << "X= "<< x ;
		cout <<"\nY= "<< y << "\nZ= "<< z <<endl;
	}
};

int main()
{
	animal a1;
	dog d;
	pupies p;
	d.d2();
	p.d3();
	return 0;
}

