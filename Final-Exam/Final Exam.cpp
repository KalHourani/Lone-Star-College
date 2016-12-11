// Final Exam.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "PreferredCustomer.h"

using namespace std;

int main()
{
    return 0;
}

void enter_prompt(string output) //cross-platform method to prompt user to press enter
{
	string _; //string to hold input
	cout << output;
	clear_input();
	getline(cin, _); //getline terminates when user presses enter
}

void clear_input() //reset cin flags and clear standard input
{
	cin.clear(); //reset cin flags
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear cin
}