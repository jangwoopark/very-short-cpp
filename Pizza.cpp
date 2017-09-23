// Pizza.cpp .. a structure for a pizza place
// Programmer Jang Woo Park
// Computer Science 440 Fall Semester
// Programming Exercise 4-7
// Due date October 5, 2009
#include <iostream>						//a PREPROCESSOR directive
struct record							//a structure template header
{
	char name[20];						//a character declaration variable for name
	double diameter;					//a double declaration variable for diameter
	double weight;						//a double declaration variable for weight
};

int main()								//a function header
{
	using namespace std;				//make definitions visible
	record pizza;						//pizza is a structure variable of type record
	cout << "What is the name of the pizza company? ";
	cin.getline(pizza.name, 20);		//input name of the pizza company
	cout << "What is the diameter of the pizza in inches? ";
	cin >> pizza.diameter;				//input diameter of the pizza
	cout << "What is the weight in pounds? ";
	cin >> pizza.weight;				//input weight of the pizza
	cout << "The name of the pizza company is " << pizza.name << ".\n";//output name of company
	cout << "The diameter of the pizza is " << pizza.diameter << " inches.\n";//output diameter
	cout << "The weight of the pizza is " << pizza.weight << " pounds.\n";//output weight
	return 0;							//end of main function
}