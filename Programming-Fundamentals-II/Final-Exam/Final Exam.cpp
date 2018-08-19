// Final Exam.cpp : Defines the entry point for the console application.
//Displays menu for testing CustomerData and PreferredCustomer class.

#include "PreferredCustomer.h"

//function prototypes
void demonstrateCustomerData(CustomerData);
void demonstratePreferredCustomer(PreferredCustomer);

int main()
{
	int input;
	while (true) //prompt user to choose what to test
	{
		cout << "What would you like to do?" << endl;
		cout << "1. Test CustomerData Class." << endl;
		cout << "2. Test PreferredCustomer Class." << endl;
		cout << "3. Exit Program." << endl;
		cin >> input;
		if (input == 1) // test CustomerData class
		{
			CustomerData customer;
			demonstrateCustomerData(customer);
		}
		else if (input == 2) //test PreferredCustomer class
		{
			PreferredCustomer customer;
			demonstratePreferredCustomer(customer);
		}
		else if (input == 3) //exit
		{
			return 0;
		}

	}
    return 0;
}

void demonstrateCustomerData(CustomerData customer)
//code to demonstrate CustomerData class by allowing user to
//input data for fields and display them to console
{
	int input;
	while (true) //prompt user to either input fields or view fields
	{
		cout << "1. Input CustomerData Fields." << endl;
		cout << "2. Display CustomerData Fields." << endl;
		cout << "3. Exit to main menu." << endl;
		cin >> input;
		if (input == 1) //input fields
		{
			customer.input();
		}
		else if (input == 2) //view fields
		{
			customer.output();
		}
		else if (input == 3) //exit
		{
			break;
		}
	}
}

void demonstratePreferredCustomer(PreferredCustomer customer)
//code to demonstrate PreferredCustomer class by allowing user to
//input data for fields and display them to console
{
	int input;
	while (true)
	{
		cout << "1. Input PreferredCustomer Fields." << endl;
		cout << "2. Display PreferredCustomer Fields." << endl;
		cout << "3. Exit to main menu." << endl;
		cin >> input;
		if (input == 1) //input fields
		{
			customer.input();
		}
		else if (input == 2) //view fields
		{
			customer.output();
		}
		else if (input == 3) //exit
		{
			break;
		}
	}
}
