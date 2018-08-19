//CopyFilter.h for Programming Fundamentals II project.
//Authors (of this file):
// Khalid Hourani

#pragma once

#ifndef CopyFilter_H
#define CopyFilter_H

#include "Filter.h"

class CopyFilter : public Filter
{
private:
	char transform(char ch)
	{
		return ch;
	}
public:
	CopyFilter() : Filter() {};
	CopyFilter(ifstream& i, ofstream& o) : Filter(i, o) {};
};

#endif