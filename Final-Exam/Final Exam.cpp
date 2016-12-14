// Final Exam.cpp : Defines the entry point for the console application.
//

#include "PreferredCustomer.h"

//function prototypes
void demonstrateCustomerData(CustomerData);
void demonstratePreferredCustomer(PreferredCustomer);

int main()
{
	int input;
	while (true) 
	{
		cout << "What would you like to do?" << endl;
		cout << "1. Test CustomerData Class." << endl;
		cout << "2. Test PreferredCustomer Class." << endl;
		cout << "3. Exit Program." << endl;
		cin >> input;
		if (input == 1)
		{
			CustomerData customer;
			demonstrateCustomerData(customer);
		}
		else if (input == 2)
		{
			PreferredCustomer customer;
			demonstratePreferredCustomer(customer);
		}
		else if (input == 3)
		{
			return 0;
		}

	}
    return 0;
}

void demonstrateCustomerData(CustomerData customer)
{
	int input;
	while (true) 
	{
		cout << "1. Input CustomerData Fields." << endl;
		cout << "2. Display CustomerData Fields." << endl;
		cout << "3. Exit to main menu." << endl;
		cin >> input;
		if (input == 1)
		{
			customer.input();
		}
		else if (input == 2)
		{
			customer.output();
		}
		else if (input == 3)
		{
			break;
		}
	}
}

void demonstratePreferredCustomer(PreferredCustomer customer)
{
	int input;
	while (true)
	{
		cout << "1. Input PreferredCustomer Fields." << endl;
		cout << "2. Display PreferredCustomer Fields." << endl;
		cout << "3. Exit to main menu." << endl;
		cin >> input;
		if (input == 1)
		{
			customer.input();
		}
		else if (input == 2)
		{
			customer.output();
		}
		else if (input == 3)
		{
			break;
		}
	}
}