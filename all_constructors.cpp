// demo code for constructor

#include<iostream>
using namespace std;

class demoConst{
	public: int i=10,j,k;
	public:
		void setval(){
		i=100;
		cout << "Inside the Setvalue(),i = " <<i <<endl;
		} //end of setval()

	//Default Constructor
		demoConst(){// function name = class name, no return
		cout << "Inside the Constructor\n" <<endl;
		j = 0;
		k = 5;
		}

	//Parametric Constructor
		demoConst(int x,int y,int z)
		{
			cout << "Inside the Parametric Constructor\n" <<endl;
			i = x;
			j = y;
			k = z;	
		}
	//Copy Constructor
		demoConst(demoConst &x)
		{
			cout << "Inside the Copy Constructor\n" <<endl;
			i = x.i;
			j = x.j;
			k = x.k;
		}

};

int main()
{
	demoConst demo1, demo2(5,5,5);
	demoConst demo3(demo2);
	cout << "values of demo1 members: "<< demo1.i <<" " << demo1.j << " "<< demo1.k <<endl;
	/*demo1.setval();
	cout << "values of demo1 members: "<< demo1.i << " "<< demo1.j << " "<< demo1.k <<endl;
	cout << "values of demo2 members: "<< demo2.i << " "<< demo2.j << " "<< demo2.k <<endl;
	demo2.setval();*/
	cout << "values of demo2 members: "<< demo2.i << " "<< demo2.j << " "<< demo2.k <<endl;
	cout << "values of demo3 members: "<< demo3.i << " "<< demo3.j << " "<< demo3.k <<endl;

	return 0;
}

