// Football.cpp .. Football Scores
// Programmer Jang Woo Park
// Computer Science 440 Fall Semester
// Programming Project 1
// Due date October 26, 2009

#include<iostream>	//a Preprocessor directive
#include<cstdlib>	//a Preprocessor directive
#include<ctime>	//a Preprocessor directive

using namespace std;	//made definitions visible
int random();	//prototype function for random numbers
int game_number;	//for game number input
int quarter;	//for quarter input
int points;	//for points input
int counter = 0;	//for counting inputs
int cont;	//for asking to continue or not
int random_integer;	//for random numbers

int main()	//main function header
{
	int (*score)[4] = new int[20][4];	//pointer to array score
 for(int g=0; g<20; g++)
	 for(int q=0; q<4; q++)
		 score[g][q]=0;	//loop to initialize all score to zero
 cout << "Welcome to Mission College Footbal!\n" <<
	 "You can update any quarter of the 20 games.\n";
 //instructions for the client

 srand((unsigned) time(0));	//to avoid pseudorandomness

 do
 {
	 cout << "Mission College scored: " << random() << endl;
	 cout << "What game number do you wish to update 1-20?\n";
	 cin >> game_number;
	 cout << "What quarter do you want to update 1-4?\n";
	 cin >> quarter;
	 cout << "What is the score?\n";
	 cin >> points;
	 score[game_number-1][quarter-1] = points;
	 cout<<"Do you want to continue?\nPlease input 0 for Yes or 1 for No: ";
	 cin >> cont;
	 counter++;
 }while(cont == 0);	//loop to input all data asked

 cout << endl << "You input " << counter << " update(s).\n" << endl;
 //print out how many times the client input

 cout << "Game#-Quaters\t1\t2\t3\t4\tTotal" << endl;
 //matrix header

 for(g=0; g<20; g++)
	 cout << g+1 << "\t\t" << score[g][0] << "\t" << score[g][1]
		  << "\t" << score[g][2] << "\t" << score[g][3] << "\t"
		  << score[g][0]+score[g][1]+score[g][2]+score[g][3] 
		  << endl;	//score matrix and calculations of vertical sums

 int *sum = new int[4];	//pointer for a new array
  for(int q=0; q<4 ; q++)
  {
	 sum[q]=0;
	 for (int g=0; g<20; g++)
		 sum[q] += score[g][q];
  }	//loop for horizontal sums

 cout << "Final Totals\t" << sum[0] << "\t" << sum[1]
	  << "\t" << sum[2] << "\t" << sum[3] << "\t"
	  << sum[0]+sum[1]+sum[2]+sum[3] <<endl;	
 //print out for horizontal sums
 return 0;
}

int random()	//prototype function for random numbers
{
	int lowest=2, highest=32;	//random boundaries
	int range=(highest-lowest)+1;
	random_integer = lowest+int(range*rand()/(RAND_MAX + 1.0));
	//calculation for random numbers
 return random_integer;
}	//end of prototype function