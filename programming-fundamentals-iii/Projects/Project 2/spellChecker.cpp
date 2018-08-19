#include "spellChecker.h"
#include <fstream>

spellChecker::spellChecker() //default constructor takes words from text file
{
        ifstream file("wordsEn.txt");
        string line;
        while (getline(file, line))
        {
                words.insert(line);
        }
}
spellChecker::spellChecker(vector<string> wordList) //constructor taking vector of strings
{
        vector<string>::iterator it;
        for (it = wordList.begin(); it != wordList.end(); ++it)
        {
                words.insert(*it);
        }
}
string spellChecker::adjacentSwap(string s, int i) //swap adjacent characters at index i and return
{
        string new_s = s;
        swap(new_s[i], new_s[i + 1]);
        return new_s;
}

string spellChecker::del(string s, int i) //delete character at index i and return
{
        string new_s = s;
        new_s.erase(i, 1);
        return new_s;
}

string spellChecker::replace(string s, char letter, int i) //replace character at index i with letter and return
{
        string new_s = s;
        new_s[i] = letter;
        return new_s;
}

string spellChecker::insert(string s, char letter, int i) //insert letter at index i and return
{
        string new_s = s;
        new_s.insert(i, string(1,letter));
        return new_s;
}

vector<string> spellChecker::spellCheck(string s)
{
        vector<string> suggestions;
        int n = s.length();
        if (words.find(s) != words.end()) //check if spelling in hash table
        {
                suggestions.push_back(s);
                return suggestions;
        }
        else //if spelling not in hash table:
        {
                for (int i = 0; i < n - 1; i++)
                {
                        string new_s = adjacentSwap(s, i); //check if swapping adjacent letters yields correctly spelled word
                        if (words.find(new_s) != words.end())
                        {
                                suggestions.push_back(new_s);
                        }
                }
                for (int i = 0; i < n; i++)
                {
                        string new_s = del(s, i); //check if deleting single letter yields correctly spelled word
                        if (words.find(new_s) != words.end())
                        {
                                suggestions.push_back(new_s);
                        }
                }
                for (int i = 0; i < n; i++)
                {
                        for (int j = 0; j < 26; j++)
                        {
                                string new_s = replace(s, alphabet[j], i); //check if replacing single letters yields correctly spelled word
                                if (words.find(new_s) != words.end())
                                {
                                        suggestions.push_back(new_s);
                                }
                        }
                }
        }
        for (int i = 0; i < n + 1; i++)
        {
                for (int j = 0; j < 26; j++)
                {
                        string new_s = insert(s, alphabet[j], i); //check if inserting single letter yields correctly spelled word
                        if (words.find(new_s) != words.end())
                        {
                                suggestions.push_back(new_s);
                        }
                }
        }
        return suggestions;
}
