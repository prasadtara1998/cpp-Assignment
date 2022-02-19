//Objective: To calculate sleep time and find age.

#include<iostream>
#include<ctime>
#include<unistd.h>
using namespace std;

class timer{
	public:
		int hour,min,sec;
		//tells us current time
		int setTime(){
			time_t now=time(0);
			tm *ltm=localtime(&now);
			hour=ltm->tm_hour;
			min=ltm->tm_min;
			sec=ltm->tm_sec;
			cout<<hour<<"\n";
			cout<<min<<"\n";
			cout<<sec<<"\n";

			}
		//returns the value of hour,min & sec
		int getTime(){
			time_t now=time(0);
			tm *ltm=localtime(&now);
			hour=ltm->tm_hour;
			min=ltm->tm_min;
			sec=ltm->tm_sec;
			}
		
		//difference between current time and get time
		timer sleeptime(timer t1,timer t2){
			timer t3;
			t3.hour=t2.hour-t1.hour;
			t3.min=t2.min-t1.min;
			t3.sec=t2.sec-t1.sec;
			return t3;
			}




};

class date{
public:
	int year,month,day;
	time_t now=time(0);
	tm *ltm=localtime(&now);
	//current date
	int setdate(int y,int m,int d){
		year=y;
		month=m;
		day=d;
		cout<<"year "<<year<<"month " <<month<<"day "<<day<<"\n";
		}
	
	date getdate(){
	date d;
	d.year=1900+ltm->tm_year;
	d.month=1+ltm->tm_mon;
	d.day=ltm->tm_mday;
	return d;
		}
	//birth date
	date setdob(int y,int m,int d){

	date d1;
	d1.year=y;
	d1.month=m;
	d1.day=d;
	return d1;
		}

	void findage(date dob){

	date d=getdate();
	date diff;
	diff.year=d.year-dob.year;
	diff.month=d.month-dob.month;
	diff.day=d.day-dob.day;
	cout<<"age is:"<<diff.year<<"years"<<diff.month<<"months "<<diff.day<<"days old"<<"\n";

		}



};




int main(){
timer t;
timer d1,d2,d3;
timer diff1,diff2;
int h,m,s;
t.setTime();
t.getTime();
cout<<"\n"<<t.hour<<" "<<t.min<<" " <<t.sec<<"\n";

t.getTime();
h=t.hour;
m=t.min;
s=t.sec;

diff1.hour=h;
diff1.min=m;
diff1.sec=s;
sleep(3);
t.getTime();
h=t.hour;
m=t.min;
s=t.sec;

diff2.hour=h;
diff2.min=m;
diff2.sec=s;
d3=t.sleeptime(diff1,diff2);
cout<<"hours "<<d3.hour <<" minutes "<<d3.min<<" seconds " <<d3.sec<<"\n";

date p;
p.setdate(2022,2,20);

date d;
d=p.getdate();

date dob;
dob=p.setdob(1998,5,25);
cout<<"year-"<<dob.year<<"month-"<<dob.month<<"day-"<<dob.day<<"\n";

p.findage(dob);


return 0;
}
