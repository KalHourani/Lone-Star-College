/*This code prompts the user to input a word and then returns a list of
   potential spelling corrections
 */

#include <iostream>
#include <string>
#include <limits> // Used for enter prompts and input validation
#include "spellChecker.h"

using namespace std;

//function prototypes
void enter_prompt();
void clear_input();
int inputInteger(min = -100, max = 100);

int main()
{
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
								int length = s.size();
								for (int i = 0; i < length; i++)
								{
																new_s[i] = tolower(new_s[i]);
								}
								return new_s;
}

int inputInteger()
{
								int input;
								cout << "Input an integer." << endl;
								cin >> input;
								while ((!(cin >> input)) || (input < min) || (input > max))
								{
									clear_input();
									cout << "Invalid input. Please input an integer between " << min << " and " << max << "." << endl;
									cin >> input;
								}
								return input;
}
