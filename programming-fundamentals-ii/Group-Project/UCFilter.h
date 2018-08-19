//UCFilter.h for Programming Fundamentals II project.
//Authors (of this file):
//Khalid Hourani
//Todd Oakes

#pragma once

#ifndef UC_H
#define UC_H

#include "Filter.h"

class UCFilter : public Filter
{
private:
	char transform(char ch)
	{
		return toupper(ch);
	}
public:
	UCFilter() : Filter() {};
	UCFilter(ifstream& i, ofstream& o) : Filter(i, o) {};
};

#endif
