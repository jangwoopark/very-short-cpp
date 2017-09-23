// Forsum.cpp .. adding between two int
// Programmer Jang Woo Park
// Computer Science 440 Fall Semester
// Programming Exercise 5-1
// Due date October 11, 2009

#include<iostream>	//a Preprocessor directive
int main()	//a function header
{
	using namespace std;	//made definitions visible
	int bottom;	//an integer declaration variable for bottom
	int top;	//an integer declaration variable for top
	int bottomed;	//an integer declaration variable for tottomed
	cout << "Input an integer number: ";
	cin >> bottom;	//input lowest number
	cout << "Now input a greater integer number: ";
	cin >> top;	//input highest number
	bottomed = bottom;	//to be used for result statement

	int sum = 0;	//variable to store the sum
	int i;	//variable counter for the loop
	for (i=bottom; i<=top; i++)	//loop for from bottom to top
	{
		sum = sum + bottom;	//adding up
		bottom++;	//increment for next sum
	}	//end of for loop
	cout << "The sum from " << bottomed << " to " << top << " is " << sum << endl;
	return 0;
}	//end of main body