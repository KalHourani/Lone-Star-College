/*This code prompts the user to input a radius then creates
a Circle object with radius equal to that input. It then outputs
the Area, Diameter, and Circumference of that circle to
standard output.
*/

#include <iostream>
#include "Circle.h"  // Needed for Circle class
#include <string>
#include <limits>	// Used for enter prompts and input validation

using namespace std;

//function prototypes
void enter_prompt();
void clear_input();

int main()
{
	double radius;
	cout << "Input radius: ";
	cin >> radius;
	while ((cin.fail()) || (radius < 0)) //input validation
	{
		clear_input();
		cout << "Radius must be a non-negative number. Input radius: ";
		cin >> radius;
	}
	Circle circle = Circle(radius);
	cout << "Area: " << circle.getArea() << endl;
	cout << "Diameter: " << circle.getDiameter() << endl;
	cout << "Circumference: " << circle.getCircumference() << endl;
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
