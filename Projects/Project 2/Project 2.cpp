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
void demonstration();
string tolower(string);

int main()
{
	int input = 1;
	while (input == 1)
	{
		cout << "Choose an option:" << endl;
		cout << "1. Check the spelling of a word." << endl;
		cout << "2. Terminate the program." << endl;
		cin >> input;
		if (input == 1)
		{
			clear_input();
			demonstration();
			clear_input();
		}
	}
	if (input == 2)
	{
		enter_prompt();
	}
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

string tolower(string s)
{
	string new_s = s;
	for (int i = 0; i < s.size(); i++)
	{
		new_s[i] = tolower(new_s[i]);
	}
	return new_s;
}

void demonstration()
{
	spellChecker S = spellChecker();
	string word;
	cout << "Input a word." << endl;
	getline(cin, word);
	word = tolower(word);
	vector<string> k = S.spellCheck(word);
	int length = k.size();
	if (length == 0)
	{
		cout << "Your word appears to be misspelled. No suggested spelling is available.";
	}
	else if (k.size() == 1)
	{
		cout << "Your word is spelled correctly." << endl;
	}
	else
	{
		cout << "Your word appears to be misspelled. Did you mean:" << endl;
		vector<string>::iterator it;
		for (it = k.begin(); it != k.end(); ++it)
		{
			cout << *it << endl;
		}
	}
}