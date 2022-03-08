#include<iostream>
using namespace std;

class animal{
	public:
		void setProtMemb(int i)
		{
			m_protMemb = i;
		}
		void Display()
		{
			cout << m_protMemb<<endl;
		}
		protected:
			int m_protMemb;
			void Protfunc()
			{
				cout << "\nAccess allowed\n";
			}
};

class dog : private animal
{
	public:
		void useProtfunc()
		{
			Protfunc();
		}
};

int main()
{
	
	dog d1;
	animal a1;
	//a1.m_protMemb; // error
	a1.setProtMemb(0); // OK
	a1.Display();
	a1.Protfunc(); // error
	d1.setProtMemb();//OK
	d1.Display();
	return 0;
}

