//Jang Woo Park

#include <iostream>

using namespace std;
double inv;
double orig;
double first;
double second;
double third;
double fourth;
int main(){
	cout << "Please input the original investment: ";
	cin >> inv;
	cout << "Percent return in the first year: ";
	cin >> first;
	cout << "Percent return in the second year: ";
	cin >> second;
	cout << "Percent return in the third year: ";
	cin >> third;
	cout << "Percent return in the fourth year: ";
	cin >> fourth;
	cout << endl;

	orig = inv;
	inv += inv * first/100;
	inv += inv * second/100;
	inv += inv * third/100;
	inv += inv * fourth/100;

	cout << "Amount of original investment\t\t\t$" << orig << endl << endl;
	cout << "Percent increase / decrease each year\t\t" << first
		<< "\t" << second << "\t" << third << "\t" << fourth << endl << endl;
	cout << "Value of original investment after 4 years\t$" << inv
		<< endl << endl;
	return 0;
}