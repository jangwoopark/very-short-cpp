// Downgrade.cpp .. a variable with more than one word.
// Programmer Jang Woo Park
// Computer Science 440 Fall Semester
// Programming Exercise 4-1
// Due date September 28, 2009
#include <iostream>
using namespace std;							//make definitions visible
char firstName[15];
char lastName[15];
char grade;
int age;
int main()										//start main function
{
	cout << "What is your first name? ";
	cin.getline(firstName, 15);
	cout << "What is your last name? ";
	cin.getline(lastName, 15);
	cout << "What letter grade do you deserve? ";
	cin >> grade; 
	grade = grade + 1;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << lastName << ", " << firstName << "\n";
	cout << "Grade: " << grade << "\n";
	cout << "Age: " << age << "\n";
	return 0;
}