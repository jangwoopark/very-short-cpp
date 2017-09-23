//time.cpp
//Programmer Jang Woo Park
//CS 440 Fall 09
//Due Dec 7, 2009

#include<iostream>
#include "time.h"
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
{cout<<"Time 1 is done!\n";
}	//deconstructor
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
	cout<<" "<<ampm[0]<<ampm[1]<<endl<<endl;

}	//show standard format