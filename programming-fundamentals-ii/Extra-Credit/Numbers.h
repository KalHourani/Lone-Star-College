//Header file for Numbers class

#include <map>

using namespace std;

class Numbers
{
private:
								int number;
								static map<int, string> wordMap;
public:
								Numbers();
								Numbers(int);
								void setNumber(int);
								int getnumber();
								void print(bool english = false);
								string numberToWord(int, bool english = false);
};
