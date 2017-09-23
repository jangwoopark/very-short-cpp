//Hands_on.cpp ... pretest
//Programmer Jang Woo Park
//CS 440 Fall 2009

#include <iostream>	//a preprocessor directive

using namespace std;	//made definitions visible
double first;	//global variable
double second;	//global variable
double third;	//global variable
double fourth;	//global variable

int main(){	//main function 
	cout << "Please enter the first number: ";
	cin >> first;	//input first #
	cout << "the second: ";
	cin >> second;	//input second #
	cout << "the third: ";
	cin >> third;	//input third #
	cout << "the fourth: ";
	cin >> fourth;	//input fourth #
	cout << "Numbers entered\t"<<first<<"\t"<<second<<"\t"
		<<third<<"\t"<<fourth<<endl;	//output the numbers entered
	cout <<"Sum\t\t"<<"Average\t\t"<<"Product"<<endl;	//table header
	cout <<"------\t\t"<<"------\t\t"<<"------"<<endl;	//line separators
	double sum = first+second+third+fourth;	//calcualte sum
	double average = (first+second+third+fourth)/4;	//calcualte average
	double product = first*second*third*fourth;	//calculate product
	cout <<sum<<"\t\t"<<average<<"\t\t"<<product<<endl;
	return 0;}
