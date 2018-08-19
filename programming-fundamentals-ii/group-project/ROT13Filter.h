//ROT13.h for Programming Fundamentals II project.
//Authors (of this file):
// Khalid Hourani

#pragma once

#ifndef ROT13FILTER_H
#define ROT13FILTER_H

#include "Filter.h"

class ROT13Filter : public Filter
{
private:
	char transform(char ch)
	{
		if (('a' <= ch) && (ch <= 'z'))
		{
			ch -= 'a';
			ch += 13;
			ch = ch % 26;
			ch += 'a';
			return ch;
		}
		else if (('A' <= ch) && (ch <= 'Z'))
		{
			ch -= 'A';
			ch += 13;
			ch = ch % 26;
			ch += 'A';
			return ch;
		}
		else
		{
			return ch;
		}
	}
public:
	ROT13Filter() : Filter(){};
	ROT13Filter(ifstream& i, ofstream& o) : Filter(i, o) {};
};

#endif