#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	fstream fin,fout;
	fin.open("file.txt");
	fout.open("file1.txt",ios::app);
	string ch;
//	while(getline(fin,ch))
	while(!fin.eof())
	{
		while(fin>>ch)
		{
			//fin.get(ch);
			fout << ch;
		}
	}

	cout << "copy done"<<endl;
	fin.close();
	fout.close();
	return 0;
}
