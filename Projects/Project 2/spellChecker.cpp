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

string spellChecker::adjacentSwap(string s, int i)
{
  string new_s = s;
  swap(new_s[i], new_s[i + 1]);
  return new_s;
}

string spellChecker::del(string s, int i)
{
  string new_s = s;
  new_s.erase(i, 1);
  return new_s;
}

string spellChecker::replace(string s, char letter, int i)
{
  string new_s = s;
  new_s[i] = letter;
  return new_s;
}

vector<string> spellChecker::spellCheck(string s)
{
  vector<string> suggestions;
  int n = s.length();
  if (words.find(s) != words.end())
  {
    suggestions.push_back(s);
    return suggestions;
  }
  else
  {
    for (int i = 0; i < n - 1; i++)
    {
      string new_s = adjacentSwap(s, i);
      if (words.find(new_s) != words.end())
      {
        suggestions.push_back(new_s);
      }
    }
    for (int i = 0; i < n; i++)
    {
      string new_s = del(s, i);
      if (words.find(new_s) != words.end())
      {
        suggestions.push_back(new_s);
      }
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < 26; j++)
      {
        string new_s = replace(s, alphabet[j], i);
        if (words.find(new_s) != words.end())
        {
          suggestions.push_back(new_s);
        }
      }
    }
    return suggestions;
  }
}
