/* Prompts user for integer input, then prints the input
   to standard output as a word. American convention is followed
   E.g., "9124" gets printed as "Nine Thousdan One Hundred Twenty-Four."
   However, the code allows for English convention by calling print
   with the optional argument english=true.
 */

#include <iostream>
#include <map>
#include "Numbers.h"
#include <string>
#include <fstream>
#include <limits>

using namespace std;

//function prototypes
void enter_prompt(string output = "Press enter to terminate the program.");
void clear_input();

int main()
{
								cout << "Input a non-negative integer between 0 and 9999: ";
								int input;
								cin >> input;
								while ((cin.fail()) || (input < 0) || (input > 9999)) //input validation
								{
																clear_input();
																cout << "Invalid input. Please input a non-negative integer between 0 and 9999: ";
																cin >> input;
								}
								Numbers number = Numbers(input);
								number.print();
								/*=====================================================================================================================
								   uncomment the following lines for the program to write the numbers as words to numbers.txt and numbersEnglish.txt
								   =======================================================================================================================*/
								/*fstream file1 = fstream("numbers.txt", fstream::out);
								fstream file2 = fstream("numbersEnglish.txt", fstream::out);
								cout << "Writing to text files." << endl;
								for (int i = 0; i < 10000; i++)
								{
																file1 << "(" << i << ", " << number.numberToWord(i) << ")" << endl;
																file2 << "(" << i << ", " << number.numberToWord(i, true) << ")" << endl;
								}
								cout << "Done." << endl;
								file1.close();
								file2.close();*/
								/*=====================================================================================================================
								   uncomment the above lines for the program to write the numbers as words to numbers.txt and numbersEnglish.txt
								   =======================================================================================================================*/
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
