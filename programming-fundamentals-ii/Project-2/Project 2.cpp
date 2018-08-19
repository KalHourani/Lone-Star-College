/*This program prompts the user to input a value N no greater than 50, then
   reads N integers into an array from a file titled data. The program then
   reverses the array and prints the values from the reversed array to standard
   output.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//function prototypes
int* reverse(int *arr, int size);

int main()
{
								int N; //number of characters to read from file
								cin >> N;
								if ((N < 0) || (N > 50)) //input validation: terminate silently unless 0 <= N <= 50
								{
																return 0;
								}

								int numbers[N]; //initialize array of N integers to store integers from Data file
								string line; //initialize string to store lines from Data file
								ifstream DataFile("Data.txt"); //opens and reads Data.txt
								for (int i = 0; i < N; i++)
								{
																getline(DataFile, line);
																int integer = stoi(line); //converts each line of Data.txt to an integer
																numbers[i] = integer; //stores integer in numbers array
								}
								DataFile.close();
								int *reversed_numbers = reverse(numbers, N); //initialize reversed array
								for (int i = 0; i < N; i++)
								{
																cout << reversed_numbers[i] << endl;
								}
								return 0;
}

int* reverse(int *arr, int size)
{
								int *reversed_array = new int[size]; //initializes reversed array
								for (int i = 0; i < size; i++)
								{
																reversed_array[i] = arr[size - i - 1];
								}
								return reversed_array;
}
