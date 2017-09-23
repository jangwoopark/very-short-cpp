//personMain.cpp header file for exe 10-2
//Programmer Jang Woo Park
//CS 440 Fall 2009
//Due date Nov 30, 2009
#include<iostream>
#include "person.h"
int main(){
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy","Sam");
	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;
	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;
	three.Show();
	cout << endl;
	three.FormalShow();
	cout << endl;
	return 0;
}
