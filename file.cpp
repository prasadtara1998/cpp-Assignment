#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	fstream myfile;
	myfile.open("file.txt",ios::in);
	

	if(!myfile)
	{
		cout << "The file cannot open"<<endl;
	}
	int a,b,c,d;
	a = myfile.good();
	b = myfile.fail();
	c = myfile.bad();
	d = myfile.eof();
	cout << a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<endl;
	myfile.close();
	return 0;
}
