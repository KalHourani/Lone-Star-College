/*This code prompts the user to input a word and then returns a list of
potential spelling corrections
*/

#include <iostream>
#include <string>
#include <limits> // Used for enter prompts and input validation
#include "basicSorts.h"
#include "mergeSort.h"

using namespace std;

//function prototypes
void enter_prompt();
void clear_input();
int inputInteger(int min = -100, int max = 100);
vector<int> inputIntegers(int size = 20, int min = -100, int max = 100);

int main()
{
	vector<int> integers = inputIntegers();
	vector<int> sorted_list = merge_sort(integers);
	cout << "Your sorted list is:";
	cout << "[";
	for (int i = 0; i < 19; i++)
	{
		cout << sorted_list[i] << ", ";
	}
	cout << sorted_list[19] << "]" << endl;
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

int inputInteger(int min, int max)
{
	int input;
	cout << "Input an integer." << endl;
	while (((cin >> input).fail()) || (input < min) || (input > max)) //input validation
	{
		clear_input();
		cout << "Invalid input. Please input an integer between " << min << " and " << max << "." << endl;
	}
	clear_input;
	return input;
}

vector<int> inputIntegers(int size, int min, int max)
{
	vector<int> integers;
	for (int i = 0; i < size; i++)
	{
		integers.push_back(inputInteger(min, max));
	}
	return integers;
}
