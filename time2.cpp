//time2.cpp
//Programmer Jang Woo Park
//CS 440 Fall 09
//Due Dec 14, 2009

#include "time2.h"
using namespace std;
time::time()	//default constructor
{
	hour=20;
	min=0;
	sec=0;
	ampm[0]='P';
	ampm[1]='M';
}
time::time(int h, int m, int s, const char * AP)
{
	hour=h;
	min=m;
	sec=s;
	ampm[0]=AP[0];
	ampm[1]=AP[1];
}	//end of constructors
time::~time()
{cout<<"Time 2 is done!\n";
}	//deconstructor
time time::operator-(const time & t) const
{
	time diff;
	int tot1, tot2;
	tot1=t.sec+60*t.min+60*60*t.hour;
	tot2=sec+60*min+60*60*hour;
	diff.sec=(tot2-tot1)%60;
	diff.min=((tot2-tot1)/60)%60;
	diff.hour=(tot2-tot1)/(60*60);
	return diff;
}
void time::showMil()
{
	if (hour>12)hour-=12;
	if (ampm[0]=='P')hour+=12;
	if (hour==24 && ampm[0]=='P')hour-=12;
	if (hour==12 && ampm[0]=='A')hour-=12;
	cout<<"\nMilitary format time: ";
	if (hour<10)
	cout<<"0"<<hour;
	else cout<<hour;
	cout<<":";
	if (min<10)
	cout<<"0"<<min;
	else cout<<min;
	cout<<":";
	if (sec<10)
	cout<<"0"<<sec;
	else cout<<sec;
	cout<<endl;
}	//show military format
void time::showSta()
{
	if (hour==0)hour+=12;
	if (hour>12)hour-=12;
	cout<<"\nStandard format time: ";
	if (hour<10)
	cout<<"0"<<hour;
	else cout<< hour;
	cout<<":";
	if (min<10)
	cout<<"0"<<min;
	else cout<<min;
	cout<<":";
	if (sec<10)
	cout<<"0"<<sec;
	else cout<<sec;
	cout<<" "<<ampm[0]<<ampm[1]<<endl;
}	//show standard format
ostream & operator<<(ostream & os, const time & t)
{
	os<<"The difference is: "<<t.hour<<" hour(s), "<<t.min<<" minute(s), "<<t.sec<<" second(s).\n";
	return os;
}