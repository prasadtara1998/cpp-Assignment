#include<iostream>
using namespace std;
#include<fstream>

int main()
{
	ifstream input;
	string str;
	int ctr = 0;
	input.open("file.txt");
	if(!input)
		cout<<"file did not open"<<endl;
	else
		//while(input>>str)
		while(getline(input,str))
		{
			ctr++;
			
		}
		cout << ctr<<endl;
		input.close();
}
