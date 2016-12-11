#include "CustomerData.h"
#include <string>
using namespace std;


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