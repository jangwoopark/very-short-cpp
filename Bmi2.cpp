// bmi2.cpp .. use three variables to store information
// Programmer Jang Woo Park
// Computer Science 440 Fall Semester
// Programming Exercise 3-2
// Due date September 28, 2009
#include <iostream>
using namespace std;							//make definitions visible
const int INCHES_PER_FEET = 12;					//constant inches per feet
const double METERS_PER_INCH = 0.0254;			//constant meters per inch
const double POUNDS_PER_KILOGRAM = 2.2;			//constant pounds per kilogram
double feet_to_inches(double);					//function prototype from feet to inches
double pounds_to_kilograms(double);				//function prototype from pounds to kilograms
int feet;										//declare integer variable feet
int inches;										//declare integer variable inches
int weight;										//declare integer variable weight
int main()										//start main function
{
	cout << "Enter your height in feet first and inches later:\nHow many feet? ";
	cin >> feet;								//input feet
	cout << "And how many inches? ";
	cin >> inches;								//input inches
	cout << "Also how much do you weight in pounds? ";
	cin >> weight;								//input weight

	double feetOnly = feet_to_inches(feet);													//get inches from feet
	double totalInches = feetOnly + inches;													//calculate total inches
	double heightInMeters = totalInches * METERS_PER_INCH;									//calculate height in meters
	double weightInKilogram = pounds_to_kilograms(weight);									//get weight in kilograms
	double bmi = weightInKilogram / (heightInMeters * heightInMeters);						//calculate bmi

	cout << "Being " << feet << " feet and " << inches << " inches and weighting "
		<< weight << " pounds, you have " << bmi << " as your body mass index (BMI).\n";	//output result
	return 0;									//end main function
}

double feet_to_inches(double feet_proto)													//function prototype fee to
{																							//inches
	double feet_only = feet_proto * INCHES_PER_FEET;										//calculate inches from feet
	return feet_only;
}

double pounds_to_kilograms(double weight_proto)												//function prototype pounds to
{																							//kilograms
	double weight_in_kilogram = weight_proto / POUNDS_PER_KILOGRAM;							//calculate weight in kilogram
	return weight_in_kilogram;
}
