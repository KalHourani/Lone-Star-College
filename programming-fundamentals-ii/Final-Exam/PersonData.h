//PersonData base class header

#ifndef PERSONDATA_H
#define PERSONDATA_H

#include <string>
#include <iostream>

using namespace std;

class PersonData
{
	private:
		string lastName;
		string firstName;
		string address;
		string city;
		string state;
		string zip;
		string phone;
	public:
		PersonData();
		PersonData(string, string, string, string, string, string, string);
		void setLastName(string);
		void setFirstName(string);
		void setAddress(string);
		void setCity(string);
		void setState(string);
		void setZip(string);
		void setPhone(string);
		string getLastName();
		string getFirstName();
		string getAddress();
		string getCity();
		string getState();
		string getZip();
		string getPhone();
		void input();
		void output();
};

#endif
