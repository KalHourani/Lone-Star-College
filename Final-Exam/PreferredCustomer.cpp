#include "PreferredCustomer.h"
#include <string>
#include <cstdlib> 
using namespace std;


PreferredCustomer::PreferredCustomer() : CustomerData()
{
	purchasesAmount = 0.0;
	setDiscountLevel();
}
PreferredCustomer::PreferredCustomer(string s1, string s2, string s3, string s4, string s5, string s6, string s7, int n, bool t, double d) : CustomerData(s1, s2, s3, s4, s5, s6, s7, n, t)
{
	purchasesAmount = d;
	setDiscountLevel();
}
void PreferredCustomer::setPurchasesAmount(double d)
{
	if (d >= 0)
	{
		purchasesAmount = d;
		setDiscountLevel();
	}
	else
	{
		cout << "Invalid Purchase Amount!\n";
		exit(EXIT_FAILURE);
	}
}
void PreferredCustomer::setDiscountLevel()
{
	if (purchasesAmount < 500)
	{
		discountLevel = 0.0;
	}
	else if (purchasesAmount < 1000)
	{
		discountLevel = 0.05;
	}
	else if (purchasesAmount < 1500)
	{
		discountLevel = 0.06;
	}
	else if (purchasesAmount < 2000)
	{
		discountLevel = 0.07;
	}
	else
	{
		discountLevel = 0.10;
	}
}
double PreferredCustomer::getPurchasesAmount()
{
	return purchasesAmount;
}
double PreferredCustomer::getDiscountLevel()
{
	return discountLevel;
}