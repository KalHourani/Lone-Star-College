/*This program reads a file named text.txt line by line, counting the number
   of uppercase characters, lowercase characters, and digits, and adding them to
   counter variables. It then prints them to standard output.
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//function prototypes
int digit_count(string s);
int upper_count(string s);
int lower_count(string s);

int main()
{
								int upper_total = 0, lower_total = 0, digit_total = 0;
								string line;
								ifstream TextFile("text.txt"); //opens text.txt
								while (getline(TextFile, line)) //reads text.txt line by line
								{
																upper_total += upper_count(line); //running total of uppercase chars
																lower_total += lower_count(line); //running total of lowercase chars
																digit_total += digit_count(line); //running total of digits
								}
								TextFile.close();
								cout << "Uppercase characters : " << upper_total << endl;
								cout << "Lowercase characters : " << lower_total << endl;
								cout << "Digits: " << digit_total << endl;
								return 0;
}

int digit_count(string s) //counts number of digits in a string s
{
								int length = s.size();
								int total = 0;
								for (int i = 0; i < length; i++)
								{
																if (isdigit(s[i]))
																{
																								total++;
																}
								}
								return total;
}

int upper_count(string s) //counts number of uppercase characters in a string s
{
								int total = 0;
								int length = s.length();
								for (int i = 0; i < length; i++)
								{
																if (isupper(s[i]))
																{
																								total++;
																}
								}
								return total;
}

int lower_count(string s) //counts number of lowercase characters in a string s
{
								int total = 0;
								int length = s.length();
								for (int i = 0; i < length; i++)
								{
																if (islower(s[i]))
																{
																								total++;
																}
								}
								return total;
}
