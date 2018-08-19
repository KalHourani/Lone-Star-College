# Programming-Fundamentals-II-Group-Project

You are hired as a software engineer to design a file filter package for a company.

A file filter reads an input file, transforms it in some way, and writes the result to an output file. You are tasked to write an abstract Filter class that defines a pure virtual function char transform(char ch) for transforming a single character.

The Filter class should have member variables to hold the input and output streams; it also should have a default constructor that initializes the input/output streams to cin/cout respectively as well as a constructor that accepts initialized input/output file streams and uses them to initialize the Filter object.

The Filter class will also have a member function void doFilter() that will use the char transform(char ch) virtual function to do the filtering.

Using your Filter class, create one derived class that performs encryption using ROT13 algorithm (explained below), another that transforms a file to all uppercase, and another that creates an unchanged copy of the original file.

Write the main function that would open the file named "input.txt" and then use the three file filters to create 3 new files: input.txt_copy for the copy filter, input.txt_encr for the encryption filter, and input.txt_upper for the uppercase filter.

ROT13:

ROT13 stands for "rotate by 13 places" and is a simple cipher based on substitution. To encrypt or decrypt using ROT13, each letter of the alphabet is replaced by a letter that is 13 places further along the alphabet. For example, A becomes N and M becomes Z; similarly, N becomes A and Z becomes M.

Only letters (both upper and lowercase) are affected by this algorithm; i.e. spaces, punctuation marks, digits and special characters are unchanged.
