//threefunctions.cpp -- defining my own function
#include <iostream>
void mice(); //function prototype for mice()
void run(); //function prototype for run()
using namespace std;

int main()
{
	mice();
	mice();
	run();
	run();
	return 0;
}

void mice() //define the mice() function
{
	cout<<"Three blind mice"<<endl;
}

void run() //define the run() function
{
	cout<<"See how they run"<<endl;
}