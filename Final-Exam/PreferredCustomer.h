#ifndef PREFERRED_CUSTOMER_H
#define PREFERRED_CUSTOMER_H
#include "CustomerData.h"
#include <string>
using namespace std;

class PreferredCustomer : CustomerData
{
private:
	double purchasesAmount;
	double discountLevel;
	void setDiscountLevel();
public:
	PreferredCustomer();
	PreferredCustomer(string, string, string, string, string, string, string, int, bool, double);
	void setPurchasesAmount(double);
	double getPurchasesAmount();
	double getDiscountLevel();
};

#endif