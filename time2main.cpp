//time2main.cpp
//Programmer Jang Woo Park
//CS 440 Fall 09
//Due Dec 14, 2009

#include<iostream>
#include "time2.h"
using namespace std;
int askHour=0;	//field variable
int askMin=0;	//field variable
int askSec=0;	//field variable
char askap[ap];	//field variable
int askHour2=0;	//field variable
int askMin2=0;	//field variable
int askSec2=0;	//field variable
char askap2[ap];//field variable
char ask[2];

int main(){
	do{
	cout << "Time program 2! We are going to calculate the difference of two time inputs.\n";
	do{
	cout<<"\nPlease enter the first Hour(s): ";
	cin>>askHour;
	if(askHour<1 || askHour>12)
	cout<<"You did not enter a valid Hour. Try again.";
	}while(askHour<1 || askHour>12);	//for correct hour input
	do{
	cout<<"\nEnter the first Minute(s): ";
	cin>>askMin;
	if(askMin<0 || askMin>59)
	cout<<"You did not enter valid Minute(s). Try again.";
	}while(askMin<0||askMin>59);	//for corret min input
	do{
	cout<<"\nEnter the first Second(s): ";
	cin>>askSec;
	if(askSec<0 || askSec>59)
	cout<<"You did not enter valid Second(s). Try Again.";
	}while(askSec<0||askSec>59);	//for correct sec input
	cin.get();	//for get.line(askap, ap)
	do{
	cout<<"\nEnter the first AM or PM: ";
	cin.getline(askap, ap);
	if(askap[0]=='A' && askap[1]=='M')
	break;
	if(askap[0]=='P' && askap[1]=='M')
	break;
	cout<<"You did not enter a valid entry. Try again.";
	}while(askap[0]!='A' || askap[0]!='P' || askap[1]!='M');
	//for correct AM PM input

	do{
	cout<<"\nPlease enter the second Hour(s): ";
	cin>>askHour2;
	if(askHour2<1 || askHour2>12)
	cout<<"You did not enter a valid Hour. Try again.";
	}while(askHour2<1 || askHour2>12);	//for correct hour input
	do{
	cout<<"\nEnter the second Minute(s): ";
	cin>>askMin2;
	if(askMin2<0 || askMin2>59)
	cout<<"You did not enter valid Minute(s). Try again.";
	}while(askMin2<0||askMin2>59);	//for corret min input
	do{
	cout<<"\nEnter the second Second(s): ";
	cin>>askSec2;
	if(askSec2<0 || askSec2>59)
	cout<<"You did not enter valid Second(s). Try Again.";
	}while(askSec2<0||askSec2>59);	//for correct sec input
	cin.get();	//for get.line(askap, ap)
	do{
	cout<<"\nEnter the second AM or PM: ";
	cin.getline(askap2, ap);
	if(askap2[0]=='A' && askap2[1]=='M')
	break;
	if(askap2[0]=='P' && askap2[1]=='M')
	break;
	cout<<"You did not enter a valid entry. Try again.";
	}while(askap2[0]!='A' || askap2[0]!='P' || askap2[1]!='M');
	//for correct AM PM input

	time sta=time(askHour, askMin, askSec, askap);
	sta.showSta();	//show input in standard format
	time sta2=time(askHour2, askMin2, askSec2, askap2);
	sta2.showSta();	//show input in standard format

	if(askap[0]!=askap2[0]) askHour2+=12;
	if(askap[0]==askap2[0] && askHour>askHour2) askHour2+=24;
	sta2=time(askHour2, askMin2, askSec2, askap2);

	time difference;
	difference = sta2.operator-(sta);	//operator-
	cout<<difference;	//friend operator
	do{
	cout<<"\nDo you want to do it again? y or n?";
	cin.getline(ask,2);
	if(ask[0] == 'y')break;
	if(ask[0] == 'n')break;
	cout<<"You did not enter a valid entry. Try again.";
	}while(ask[0]!='n');	//end of loop for valid entry
	}while(ask[0]=='y');	//end of while loop for ask[0]='y';
	return 0;
}