//PreferredCustomer header file.

#ifndef PREFERRED_CUSTOMER_H
#define PREFERRED_CUSTOMER_H
#include "CustomerData.h"
#include <cstdlib>

class PreferredCustomer : public CustomerData
{
	double purchasesAmount;
	double discountLevel;
	void setDiscountLevel();
public:
	PreferredCustomer();
	PreferredCustomer(string, string, string, string, string, string, string, int, bool, double);
	void setPurchasesAmount(double);
	double getPurchasesAmount();
	double getDiscountLevel();
	void input();
	void output();
};

#endif
