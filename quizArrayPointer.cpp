//Quiz on array pointer
//Programmer Jang Woo Park
//Nov 16, 2009

#include<iostream>
using namespace std;
int main()
{
	int * ptr=new int[5];
	for (int i=0; i<5; i++)
		ptr[i]=i+1;
	for (int j=0; j<5; j++)
	{
		ptr[j] += 5;
		cout << ptr[j];
	}
	delete[] ptr;
	return 0;
}
