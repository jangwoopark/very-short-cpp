//person.cpp header file for exe 10-2
//Programmer Jang Woo Park
//CS 440 Fall 2009
//Due date Nov 30, 2009
#include<iostream>
#include "person.h"
#include<string>
using namespace std;
Person::Person(const string & ln, const char * fn){
lname=ln;
for (int i=0; i<25; i++) fname[i]=fn[i];
}
void Person::Show() const{
	cout<<"Full Name: "<<fname <<" "<<lname<<endl;
}
void Person::FormalShow() const{
	cout<<"Full Formal Name: "<<lname<<", "<<fname<<endl;
}