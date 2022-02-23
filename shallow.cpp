// demo for shallow copy in default constructor

#include<iostream>
using namespace std;

class demo{
	int data1,data2, *p;

	public: 
		demo(){//default constructor
		p = new int;
		}

		void setVal(int i,int j,int k){
		data1 = i;
		data2 = j;
		*p = k;
		}

		void display(){
		cout << "Value for data1: " << data1 <<"\ndata2: "<<data2<< "\npointer: "<< *p <<endl;
		}
};//end of class demo

int main(){
	demo d1;
	d1.setVal(10,20,30);
	cout << "\ndisplaying d1"<<endl;
	d1.display();

//call compiler's copy-constructor
	demo d3;
	d3=d1;
	cout << "\ndisplaying d3"<<endl;
	d3.display();

//update the values
	d1.setVal(100,200,300);
	cout << "\ndisplaying d1"<<endl;
	d1.display();
	cout << "\ndisplaying d3"<<endl;
	d3.display();

return 0;
}
