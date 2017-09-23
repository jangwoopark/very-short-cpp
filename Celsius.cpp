//celsius.cpp -- converts Celsius to Fahrenheit
//Jang Woo Park
//Computer Science 440 Mission College
//Programming exercise 2-4 page 64 due date 9-21-2009
#include <iostream>										//a PREPROCESSOR directive
using namespace std;									//make definitions visible
double ctof(double);									//function prototype for ctof()
int main()												//start of function body
{
    double temp;										//declare a double variable
	cout << "Please enter a Celsius value:";			//ask for Celsius value
	cin >> temp;										//input Celsius value
	double calc = ctof(temp);							//calcualate by calling ctof()
	cout << temp << " degrees Celsius is " << calc << " degrees Fahrenheit." <<endl;//display the convertion from c to f
	return 0;											//terminate main
}														//end of function body

double ctof(double temp)								//define the ctof() function
{
	double convert = 1.8 * temp + 32;					//equation for fahrenheit from celsius
	return convert;										//return ctof() function
}
