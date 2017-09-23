//golfdriver.cpp
//Programmer Jang Woo Park
//CS 440 09
//due Nov 23, 2009

#include<iostream>
#include<string>
#include "golf.H"	//Structure templates, function prototypes
using namespace std;
const int players=3;
int main()
{
	cout << "You can input up to " << players <<" players.\n";
	golf iron[players];	//template array
	int i;
	for (i=0; i<players; i++)	//filling template
	if (setgolf(iron[i])==0)
			break;
	for (int j=0; j<i; j++)	//showing template array
			showgolf(iron[j]);
	setgolf(iron[0],"Ann Birdfree",24);	//set name and hc
	showgolf(iron[0]);	//show name and hc
	handicap(iron[0], 22);	//set handicap only
	showgolf(iron[0]);	//show name and hc
	return 0;
}
	