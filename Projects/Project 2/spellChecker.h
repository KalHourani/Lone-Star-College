// Specification file for the spellChecker class.
#ifndef spellChecker_H
#define spellChecker_H

#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

// spellChecker class declaration.

class spellChecker
{
private:
	unordered_set<string> words;
	string adjacentSwap(string, int);
	string del(string, int);
	string replace(string, char, int);
	string insert(string, char, int);
	char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
												'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
												'w', 'x', 'y', 'z'};
public:
	spellChecker();
	spellChecker(vector<string>);
	vector<string> spellCheck(string);
};

#endif
