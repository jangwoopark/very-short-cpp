//modulus.cpp .. uses % operator to convert integer inches to feet and inches
#include <iostream>
int main()
{
	using namespace std;
	const int INCHES_PER_FEET = 12;
	int inches;

	cout << "Enter your height in inches: ";
	cin >> inches;
	int feet = inches / INCHES_PER_FEET;		//whole feet
	int inch = inches % INCHES_PER_FEET;		//remainder in inches
	cout << inches << " inches are " << feet
		<< " feet, " << inch << " inche(s).\n";
	return 0;
}
