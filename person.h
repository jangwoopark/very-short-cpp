//person.h header file for exe 10-2
//Programmer Jang Woo Park
//CS 440 Fall 2009
//Due date Nov 30, 2009
#include<iostream>
using namespace std;
class Person{
private:
	string lname;	//Person's last name
	char fname[25];	//Person's first name
public:
	Person() {lname="";fname[0]='\0';}	//#1
	Person(const string & ln, const char * fn="Heyyou");	//#2
	//the following methods display lname and fname
	void Show() const;	//firstname lastname format
	void FormalShow() const;	//lastname, firstname format
};