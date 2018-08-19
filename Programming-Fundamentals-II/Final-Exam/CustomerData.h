//Header file for CustomerData class, derived from PersonData class.

#ifndef CUSTOMER_DATA_H
#define CUSTOMER_DATA_H
#include "PersonData.h"

class CustomerData : public PersonData
{
	private:
		int customerNumber;
		bool mailingList;
	public:
		CustomerData();
		CustomerData(string, string, string, string, string, string, string, int, bool);
		void setCustomerNumber(int);
		void setMailingList(bool);
		int getCustomerNumber();
		bool getMailingList();
		void input();
		void output();
};

#endif
