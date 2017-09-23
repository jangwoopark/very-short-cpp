//time.h
//Programmer Jang Woo Park
//CS 440 Fall 09
//Due Dec 7, 2009

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
	void showMil();
	void showSta();
};