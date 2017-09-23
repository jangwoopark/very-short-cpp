//CandyBar.cpp 
//Programmer Jang Woo Park
//CS 440 Fall 09
//Due Nov 16, 2009

#include <iostream>
using namespace std;

struct CandyBar {	//structure template for candybar
	char name[40];
	double weight;
	int calories;
};

const CandyBar & use(CandyBar & CandyBarref);
//prototype to a reference
void pointto(CandyBar * pt);	//prototype to a pointer
const CandyBar & useref(CandyBar & CandyBarrefer);
//prototype to a reference

int main()	//main header
{
	CandyBar munch=	//default candybar
	{
		"Millennium Munch", 2.85, 350};
		use(munch);	//use reference structure
		pointto(&munch);	//use pointer
		use(munch);	//use reference structure
		useref(munch);	//use reference structure
		use(munch);	//use reference structure
		return 0;
}
const CandyBar & use(CandyBar & CandyBarref)
{
	cout << "Label: " << CandyBarref.name << endl;
	cout << "Weight: " << CandyBarref.weight << endl;
	cout << "Calories: " << CandyBarref.calories << endl;
	return CandyBarref;
}	//to output the structure
void pointto(CandyBar * pt)
{
	cout << "Please input a new name: \n";
	cin >> pt->name;
	cout << "Please input new weight: \n";
	cin >> pt->weight;
	cout << "Please input new calories: \n";
	cin >> pt->calories;
}	//to ask for new data using pointers
const CandyBar & useref(CandyBar & CandyBarrefer)
{
	cout << "Please input another new name: \n";
	cin >> CandyBarrefer.name;
	cout << "Please input other new weight: \n";
	cin >> CandyBarrefer.weight;
	cout << "Please input other new calories: \n";
	cin >> CandyBarrefer.calories;
	return CandyBarrefer;
}	//to ask for new data using reference structure