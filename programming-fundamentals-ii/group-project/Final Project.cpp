// Final Project.cpp : Defines the entry point for the console application.
//Authors (of this file):
// Khalid Hourani


#include "stdafx.h"
#include <iostream>
#include "CopyFilter.h"
#include "UCFilter.h"
#include "ROT13Filter.h"

using namespace std;

int main()
{
	ifstream input;
	ofstream output;

	input.open("input.txt");
	output.open("input.txt_copy");
	CopyFilter Copy = CopyFilter(input, output);
	Copy.doFilter();
	input.close();
	output.close();

	input.open("input.txt");
	output.open("input.txt_encr");
	ROT13Filter ROT13 = ROT13Filter(input, output);
	ROT13.doFilter();
	input.close();
	output.close();

	input.open("input.txt");
	output.open("input.txt_upper");
	UCFilter UC = UCFilter(input, output);
	UC.doFilter();
	input.close();
	output.close();

	return 0;
}