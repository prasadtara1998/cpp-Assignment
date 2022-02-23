//To create inline function that returns cube of
given number (i.e n=3, cube=(n*n*n)=27).

#include<iostream>
using namespace std;

inline int cube(int s)
{
	//cout<< "Inside the function" << endl;
	return s*s*s;
}
int main()
{
	cout<<"Cube of the value 3 is : "<< cube(3) <<endl<<endl;

return 0;
}


