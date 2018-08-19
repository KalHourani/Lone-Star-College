// Project 6.cpp : Defines the entry point for the console application.
//

#include "Essay.h"
#include <string>
#include <iostream>

using namespace std;

// function prototypes
void enter_prompt(string output = "Press enter to terminate the program.");
void clear_input();
double input_double(double, double);

int main()
{
	double gScore, sScore, lScore, cScore;
	cout << "Input points received for grammar: ";
	gScore = input_double(0, 30);
	cout << "Input points received for spelling: ";
	sScore = input_double(0, 20);
	cout << "Input points received for length: ";
	lScore = input_double(0, 20);
	cout << "Input points received for content: ";
	cScore = input_double(0, 30);

	Essay essay = Essay(gScore, sScore, lScore, cScore);
	char gradeLetter = essay.getLetterGrade();
	double score = essay.getScore();
	if ((gradeLetter == 'A') || (gradeLetter == 'F'))
	{
		cout << "This student's grade is " << score;
		cout << ", which is an " << gradeLetter << "." << endl;
	}
	else
	{
		cout << "This student's grade is " << score;
		cout << ", which is a " << gradeLetter << "." << endl;
	}
	enter_prompt();
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

double input_double(double min, double max) // prompts user for input and validates
											// that input is between min and max
{
	double input;
	cin >> input;
	bool invalid_input = ((cin.fail()) || (input < min) || (input > max));
	while (invalid_input)
	{
		cout << "Invalid input. Please input a number between " << min << " and " << max << " : ";
		clear_input();
		cin >> input;
		invalid_input = ((cin.fail()) || (input < min) || (input > max));
	}
	return input;
}