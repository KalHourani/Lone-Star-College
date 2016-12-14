//Definitions for CustomerData class.

#include "CustomerData.h"

//prototype
void clear_input();

CustomerData::CustomerData() : PersonData()
{
	customerNumber = 0;
	mailingList = false;
}
CustomerData::CustomerData(string s1, string s2, string s3, string s4, string s5, string s6, string s7, int n, bool t) : PersonData(s1, s2, s3, s4, s5, s6, s7)
{
	customerNumber = n;
	mailingList = t;
}
void CustomerData::setCustomerNumber(int n)
{
	customerNumber = n;
}
void CustomerData::setMailingList(bool t)
{
	mailingList = t;
}
int CustomerData::getCustomerNumber()
{
	return customerNumber;
}
bool CustomerData::getMailingList()
{
	return mailingList;
}

void CustomerData::input()
{
	PersonData::input();
	cout << "Customer Number: ";
	cin >> customerNumber;
	cout << "Mailing List: " << endl;
	cout << "Enter 0 if customer is not on mailing list." << endl;
	cout << "Enter 1 if customer is on mailing list." << endl;
	int input;
	cin >> input;
	if (input == 0)
	{
		mailingList = false;
	}
	else
	{
		mailingList = true;
	}
}

void CustomerData::output()
{
	PersonData::output();
	cout << "Customer Number: " << customerNumber << endl;
	cout << "Mailing List: ";
	if (mailingList)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}
