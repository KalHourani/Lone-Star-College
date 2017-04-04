/*This code prompts the user to input a word and then returns a list of
potential spelling corrections
*/

#include <iostream>
#include <string>
#include <limits>	// Used for enter prompts and input validation
#include "spellChecker.h"

using namespace std;

//function prototypes
void enter_prompt();
void clear_input();

int main()
{
	spellChecker S = spellChecker();
	string word;
	cout << "Input a word.";
	getline(cin, word);
	enter_prompt();
    return 0;
}

void enter_prompt() //cross-platform method to prompt user to press enter
{
	string _; //string to hold input
	cout << "Press enter to terminate the program.";
	clear_input();
	getline(cin, _); //getline terminates when user presses enter
}

void clear_input() //reset cin flags and clear standard input
{
	cin.clear(); //reset cin flags
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear cin
}
