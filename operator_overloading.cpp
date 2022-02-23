//Operator Overloading

#include<iostream>
using namespace std;

class Complex{

	public:
	int real,img;
	//default constructor
	Complex(){
	real = 0;
	img = 0;
	}
	//param const
	Complex(int x, int y){
	real = x;
	img = y;
	}
	//display function
	void display(){
	cout << "The real part: "<< real << "and img part: "<< img << endl << endl;
	}
	friend Complex operator + (Complex , Complex);
	friend Complex operator - (Complex , Complex);
	friend Complex operator * (Complex , Complex);
	friend Complex operator / (Complex , Complex);
	//overload the '>' operator
	Complex operator > (Complex ob){
	if(real > ob.real)
	{
		Complex temp;
		temp.real = real;
		temp.img = img;
		return temp;
	}
	else
	{
		Complex temp;
		temp.real = ob.real;
		temp.img = ob.img;
		return temp;
	}
	}
	//overload the '<' operator
	Complex operator < (Complex ob){
	if(real < ob.real)
	{
		Complex temp;
		temp.real = real;
		temp.img = img;
		return temp;
	}
	else
	{
		Complex temp;
		temp.real = ob.real;
		temp.img = ob.img;
		return temp;
	}
	}
	//overload the '%' operator
	Complex operator % (Complex ob)
	{
		Complex temp;
		temp.real = real % ob.real;
		temp.img = img % ob.img;
		return temp;
	}
	
	//overload the '++' operator
	Complex operator == (Complex ob)
	{
		if(real == ob.real)
	{
		Complex temp;
		temp.real = ++real;
		temp.img = ++img;
		return temp;
	}
	else
	{
		Complex temp;
		temp.real = ++ob.real;
		temp.img = ++ob.img;
		return temp;
	}
	}
	
};//end of Complex class
Complex operator + (Complex obj1, Complex obj2)
{
	Complex temp;
	temp.real = obj1.real + obj2.real;
	temp.img = obj1.img + obj2.img;
	return temp;
}
Complex operator - (Complex obj1, Complex obj2)
{
	Complex temp;
	temp.real = obj1.real - obj2.real;
	temp.img = obj1.img - obj2.img;
	return temp;
}
Complex operator * (Complex obj1, Complex obj2)
{
	Complex temp;
	temp.real = obj1.real * obj2.real;
	temp.img = obj1.img * obj2.img;
	return temp;
}
Complex operator / (Complex obj1, Complex obj2)
{
	Complex temp;
	temp.real = obj1.real / obj2.real;
	temp.img = obj1.img / obj2.img;
	return temp;
}
int main()
{
	Complex c1(4,4), c2(2,2);
	c1.display();
	c2.display();
	
	cout << "Addition:"<<endl;
	Complex c3;
	c3 = c1 + c2 + c1 + c2;
	c3.display();
	
	cout << "Subtraction:"<<endl;
	c3 = c1 - c2 + c1 - c2;
	c3.display();

	cout << "Multiplication:"<<endl;
	c3 = c1 * c2;
	c3.display();

	cout << "Division:"<<endl;
	c3 = c1 / c2;
	c3.display();

	cout << "Max:"<<endl;
	c3 = c1 > c2;
	c3.display();

	cout << "Min:"<<endl;
	c3 = c1 < c2;
	c3.display();

	cout << "Modulus:"<<endl;
	c3 = c1 % c2;
	c3.display();

	cout << "increment:"<<endl;
	c3 = (c1 == c2);
	c3.display();

return 0;
}
