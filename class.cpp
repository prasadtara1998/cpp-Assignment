#include<iostream>
using namespace std;

class student
{
	public:
	int roll_no;
	char name[10];
	void input()
	{
		cout << "Enter roll no. of student\n";
		cin >> roll_no;

		cout <<"Enter name of student\n";
		cin >> name;
	}
};

class test
{
	public:
	int marks[5];
	int i;
	void input1()
	{
		cout << "Enter marks of 5 subjects\n";
		for(i=0;i<5;i++)
		{
			cin >> marks[i];
		}
	}

};

class result : public student,public test
{
	public:
	int totalmarks=0;
	int percentage;
	

	void output()
	{
		
		for(int i=0;i<5;i++)
		{
			totalmarks = totalmarks + marks[i];
		}
		percentage = (totalmarks/500)*100;
	}
};

int main()
{
	student x;
	test y;
	result z;

	x.input();
	y.input1();
	z.output();
	
	//cout << "Total marks of roll no " << x.roll_no << "is: "<< z.totalmarks <<"and percentage is : "<< z.percentage<<"%"<<endl; 
	return 0;
}
