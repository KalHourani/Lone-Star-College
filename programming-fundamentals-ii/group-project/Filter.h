//Filter.h for Programming Fundamentals 2 project.
//Authors (of this file):
// Todd Oakes

#pragma once
#ifndef FILTER_H
#define FILTER_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Filter {
private:
	//initialize the variables as fstreams, since it's easier to upconvert to fstream than downconvert to iostream
	ifstream& in = static_cast<ifstream&>(cin);
	ofstream& out = static_cast<ofstream&>(cout);
public:
	//default constructor: initialize to cin/cout
	Filter() {
		//istream& in = cin;
		//ostream& out = cout;
	}

	//initialize to ifstream//ofstream
	Filter(ifstream& i, ofstream& o)
	{
		cin.rdbuf(i.rdbuf());
		cout.rdbuf(o.rdbuf());
		ifstream& in = i;
		ofstream& out = o;
	}

	//performs the designated cipher (see base class)
	void doFilter() {
		char c;
		while (in.get(c)) { //if there's a character to read
			out.put(transform(c));
		}
		out.put('\n');
	};

	//cipher that produces a copy
	virtual char transform(char ch)
	{
		return ch; //dummy function, returns a copy
	};
};

#endif // !Filter