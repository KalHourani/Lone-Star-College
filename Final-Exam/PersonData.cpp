#pragma once

#include "PersonData.h"

using namespace std;

//prototype
void clear_input();

PersonData::PersonData()
	{
		lastName = "";
		firstName = "";
		address = "";
		city = "";
		state = "";
		zip = "";
		phone = "";
	}
PersonData::PersonData(string s1, string s2, string s3, string s4, string s5, string s6, string s7)
	{
		lastName = s1;
		firstName = s2;
		address = s3;
		city = s4;
		state = s5;
		zip = s6;
		phone = s7;
	}

void PersonData::setLastName(string s)
{
	lastName = s;
}
void PersonData::setFirstName(string s)
{
	firstName = s;
}
void PersonData::setAddress(string s)
{
	address = s;
}
void PersonData::setCity(string s)
{
	city = s;
}
void PersonData::setState(string s)
{
	state = s;
}
void PersonData::setZip(string s)
{
	zip = s;
}
void PersonData::setPhone(string s)
{
	phone = s;
}
string PersonData::getLastName()
{
	return lastName;
}
string PersonData::getFirstName()
{
	return firstName;
}
string PersonData::getAddress()
{
	return address;
}
string PersonData::getCity()
{
	return city;
}
string PersonData::getState()
{
	return state;
}
string PersonData::getZip()
{
	return zip;
}
string PersonData::getPhone()
{
	return phone;
}

void PersonData::input()
{
	clear_input();
	cout << "Last Name: ";
	getline(cin, lastName);

	cout << "First Name: ";
	getline(cin, firstName);

	cout << "Address: ";
	getline(cin, address);

	cout << "City: ";
	getline(cin, city);

	cout << "State: ";
	getline(cin, state);

	cout << "Customer ZIP: ";
	getline(cin, zip);

	cout << "Customer Phone: ";
	getline(cin, phone);
}

void PersonData::output()
{
	cout << "Last Name: " << lastName << endl;

	cout << "First Name: " << firstName << endl;

	cout << "Address: " << address << endl;

	cout << "City: " << city << endl;

	cout << "State: " << state << endl	;

	cout << "Customer ZIP: " << zip << endl;

	cout << "Customer Phone: " << phone << endl;
}
