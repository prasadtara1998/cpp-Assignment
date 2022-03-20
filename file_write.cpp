#include<iostream>
using namespace std;
#include<fstream>

class student
{
	int roll;
	char name[25];
	float marks;

	void getdata()
	{
		cout<<"enter roll no. and name "<<endl;
		cin>>roll>>name;
		cout<<"marks"<<endl;
		cin>>marks;
	}
	public: void AddRecord()
	{
		fstream f;
		student stu;
		f.open("student.txt",ios::app|ios::binary);
		stu.getdata();
		f.write((char*)&stu,sizeof(stu));
		f.close();
	}
	public:
	void display(int x)
	{
		fstream f; student s;
		f.open("student.text",ios::in|ios::binary);
		
		for(int m=0;m<x;m++)
		{
			f.read((char*) &s,sizeof(s));
			cout<<"Roll"<<s.roll<<"name"<<s.name<<"Mark: "<<s.marks<<endl;
		}
		f.close();
	}

};

int main()
{
	student s;
	int ctr =0;
	char ch = 'n';
	do
	{
		s.AddRecord();
		cout<<"want add more?(y/n)"<<endl;
		cin>>ch;
		ctr++;
	}while (ch == 'y'||ch == 'Y');
	s.display(ctr);
	cout << "updated!!!"<<endl;
	
}
