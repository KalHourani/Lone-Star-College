//Specification file for Numbers class

#include <iostream>
#include <map>
#include "Numbers.h"
#include <string>

using namespace std;

Numbers::Numbers()
{
								number = 0;
}
Numbers::Numbers(int num)
{
								number = num;
}
void Numbers::setNumber(int num)
{
								number = num;
}
int Numbers::getnumber()
{
								return number;
}
map<int, string> Numbers::wordMap = { {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four",},
																			{5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"},
																			{10, "Ten"}, {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"},
																			{15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"},
																			{20, "Twenty"}, {30, "Thirty"}, {40, "Forty"}, {50, "Fifty"}, {60, "Sixty"},
																			{70, "Seventy"}, {80, "Eighty"}, {90, "Ninety"}, {100, "Hundred"}, {1000, "Thousand"}
																		};

string Numbers::numberToWord(int n, bool english)
/*recursively returns word form of n
   Returns in english usage if bool english set to true,
   e.g. 9091 -> nine thousand ninety-one (english = false)
   9091 -> nine thousand and ninety-one (english = true)
 */
{
								if (n <= 20)
								{
																return wordMap[n]; //0 through 20 are included in wordMap
								}
								else if (n <= 99)
								{
																if (n % 10 == 0)
																{
																								return wordMap[n]; //two-digit multiples of 10 are also included in wordMap
																}
																else
																{
																								return wordMap[10 * (n / 10)] + "-" + wordMap[n % 10];
																								//wordMap of the tens value + wordmap of the ones value.
																								//e.g. 57 - > "fifty" + "-" + "seven"
																}
								}
								else if (n <= 999)
								{
																if (n % 100 == 0)
																{
																								return wordMap[n / 100] + " " + wordMap[100];
																								//wordMap of leading digit + word "hundred"
																								//e.g. 600 -> "six" + "hundred"
																}
																else
																{
																								if (english)
																								{
																																return wordMap[n / 100] + " " + wordMap[100] + " and " + numberToWord(n % 100);
																								}
																								else
																								{
																																return wordMap[n / 100] + " " + wordMap[100] + " " + numberToWord(n % 100);
																																//same as above, plus last two digits
																																//e.g. 685 -> "six" + "hundred" + numberToWord(85)
																								}
																}
								}
								else
								{
																if (n % 1000 == 0)
																{
																								return wordMap[n / 1000] + " " + wordMap[1000];
																								//return the leading term + "thousand"
																								//e.g. 4000 -> "four" + "thousand"
																}
																else if ((n % 1000 < 100) && (english))
																{
																								return wordMap[n / 1000] + " " + wordMap[1000] + " and " + numberToWord(n % 100);
																								//special case where hundreds digit is 0
																								// only applies to english usage
																								//1085 -> "one" + "thousand" + "and" + numberToWords(85)
																}
																else
																{
																								return wordMap[n / 1000] + " " + wordMap[1000] + " " + numberToWord(n % 1000, english);
																								//same as previous + last three digits
																								//e.g. 1895 -> "one" + "thousand" + numberToWord(895)
																}
								}
}

void Numbers::print(bool english)
{
								cout << numberToWord(number, english) << endl;
}
