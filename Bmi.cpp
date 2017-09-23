// bmi.cpp .. use three variables to store information
#include <iostream>
int main()
{
	using namespace std;
	const int INCHES_PER_FEET = 12;
	const double METERS_PER_INCH = 0.0254;
	const double POUNDS_PER_KILOGRAM = 2.2;
	int feet;
	int inches;
	int weight;

	cout << "Enter your height in feet first and inches later:\nHow many feet? ";
	cin >> feet;
	cout << "And how many inches? ";
	cin >> inches;
	cout << "Also how much do you weight in pounds? ";
	cin >> weight;

	double feet_only = feet * INCHES_PER_FEET;
	double total_inches = feet_only + inches;
	double height_in_meters = total_inches * METERS_PER_INCH;
	double weight_in_kilogram = weight / POUNDS_PER_KILOGRAM;
	double bmi = weight_in_kilogram / (height_in_meters * height_in_meters);

	cout << "Being " << feet << " feet and " << inches << " inches and weighting "
		<< weight << " pounds, you have " << bmi << " as your body mass index (BMI).\n";
	return 0;
}