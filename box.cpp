// box.cpp
//Programmer Jang Woo Park
//CS 440 Fall 09
//Exercise 7.3 due Nov 9, 2009

#include <iostream>
using namespace std;

struct box {	//structure for box
    char maker[40];
    float height,width,length,volume;
};

void output(box a);	//prototype to show output
void pointto(box * pt);	//prototype to calculate volume

int main(void)	//main function and answer to question C)
{
    box packages = {"ACME", 3, 5, 5}; //any input
    pointto(&packages);
    output(packages);
    return 0;
}

void output(box a)	//answer to question a)
{
    cout << "label: " << a.maker << endl;
    cout << "height: " << a.height << endl;
    cout << "width: " << a.width << endl;
    cout << "length: " << a.length << endl;
    cout << "volume: " << a.volume << endl;
}

void pointto(box * pt)	//answer to question b)
{
    pt->volume = pt->height * pt->width * pt->length;
}
