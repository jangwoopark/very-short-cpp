// Forsum.cpp .. adding between two int
// Programmer Jang Woo Park
// Computer Science 440 Fall Semester
// Programming Exercise 5-3
// Due date October 19, 2009

#include<iostream>	//a Preprocessor directive
int main()	//a function header
{
	using namespace std;	//made definitions visible
	int i = 1;	//integer counter starting at 1
	double daphne = 100;	//starting amount for Daphne
	double cleo = 100;	//starting amount for Cleo
	cout << "Both Daphne and Cleo have 100 dollars" << endl;	//a one time display
	//of year 0 due to the counter i
	while (daphne>=cleo)	//head of loop with flag to stop
	{
		daphne += 10;	//Daphne earnings
		cleo *= 1.05;	//Cleo earnings
		cout<<"At year "<<i<<", Daphne has "<<daphne<<" dollars, and Cleo has "<<cleo<<" dollars.\n";
		//display year by year how much each earns
		i++;	//increment counter
	} 
	cout << "The number of years for Cleo to pass Daphne is " << i-1 << endl;	//final result
	return 0;
}

