//time2.h
//Programmer Jang Woo Park
//CS 440 Fall 09
//Due Dec 14, 2009

#include<iostream>
using namespace std;
const int ap=3;
class time	//class with private and public sections
{
private:
	int hour;
	int min;
	int sec;
	char ampm[ap];
public:
	time();
	time(int h, int m, int s, const char * AP);
	~time();
	time operator-(const time & t) const;
	void showMil();
	void showSta();
	friend ostream & operator<<(ostream & os, const time & t);
};