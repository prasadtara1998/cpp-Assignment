//To create function sum(), that performs addition of 3
integers also demonstrate Default Arguments concept.

#include<iostream>
using namespace std;

float sum(float a=1, int b=2, float c=3)
{
	return a+b+c;
}

int main()
{
	float r;
	r=sum();
	cout<<"result="<<r<<endl;
	r=sum(9.2,1,10);
	cout<<"result="<<r<<endl;
	r=sum(15,12);
	cout<<"result="<<r<<endl;
	r=sum(3,4,7);
	cout<<"result="<<r<<endl;
}
