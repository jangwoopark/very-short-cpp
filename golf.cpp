//golf.cpp -- contain functions called in golf.h
#include<iostream>
#include<string>
#include "golf.H"	//Structure templates, function prototypes
using namespace std;

void setgolf(golf & g, const char * name, int hc)
{
	for (int l=0; l<strlen(name)+1; l++)
		g.fullname[l] = name[l];	//fill up the string
	g.handicap = hc;	//set handicap
}	//end of input function
int setgolf(golf & g)
{
	cout << "Golfer's name? ";
	cin.getline(g.fullname, Len);	//input name
	if (g.fullname[0] == '\0')
		return 0;
	cout << "Handicap? ";
	cin >> g.handicap;	//input handicap
	cin.get();	//to get rid of \n
	return 1;
}	//end of input function

void handicap(golf & g, int hc)
{
	g.handicap=hc;	//set handicap	
}	//end of input function

void showgolf(const golf & g)	//output name and hc
{
	cout << "Golfer: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
}	//end of output function
