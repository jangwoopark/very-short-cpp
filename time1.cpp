//time1.cpp
//Programmer Jang Woo Park
//CS 440 Fall 09
//Due Dec 7, 2009

#include<iostream>
#include "time.h"
using namespace std;
int askHour=0;	//field variable
int askMin=0;	//field variable
int askSec=0;	//field variable
char askap[ap];	//field variable
int main(){
	cout << "Time program 1!\n";
	time initial=time();
	initial.showMil();	//initial hour military display
	initial.showSta();	//initial hour standard display
	do{
	cout<<"\nPlease enter Hour: ";
	cin>>askHour;
	if(askHour<1 || askHour>12)
	cout<<"You did not enter a valid Hour. Try again.";
	}while(askHour<1 || askHour>12);	//for correct hour input
	do{
	cout<<"\nEnter Minute(s): ";
	cin>>askMin;
	if(askMin<0 || askMin>59)
	cout<<"You did not enter valid Minute(s). Try again.";
	}while(askMin<0||askMin>59);	//for corret min input
	do{
	cout<<"\nEnter Second(s): ";
	cin>>askSec;
	if(askSec<0 || askSec>59)
	cout<<"You did not enter valid Second(s). Try Again.";
	}while(askSec<0||askSec>59);	//for correct sec input
	cin.get();	//for get.line(askap, ap)
	do{
	cout<<"\nEnter AM or PM: ";
	cin.getline(askap, ap);
	if(askap[0]=='A' && askap[1]=='M')
	break;
	if(askap[0]=='P' && askap[1]=='M')
	break;
	cout<<"You did not enter a valid entry. Try again.";
	}while(askap[0]!='A' || askap[0]!='P' || askap[1]!='M');
	//for correct AM PM input

	time mil=time(askHour, askMin, askSec, askap);
	mil.showMil();	//show input in military format
	mil.showSta();	//show input in standard format
	return 0;
}