#Final Exam - Programming portion
#COSC 1337 – Programming Fundamentals II
<b>You have been hired as a software engineer to create a
software package for a retail store. Following is the
requirement for this software package.</b>

<b>Part 1</b>

PersonData and CustomerData classes

Design a class named PersonData with the following member
variables:
* lastName
* firstName
* address
* city
* state
* zip
*phone

Write the appropriate accessor and mutator functions for these
member variables.

Next, design a class named CustomerData, which is derived
from the PersonData. The CustomerData class should have the
following member variables:
* customerNumber
*   mailingList

The customerNumber variable will be used to hold a unique
integer for each customer. The mailingList variable should be a
bool. It will be set to true if the customer wishes to be on a
mailing list, or false if the customer does not wish to be on a
mailing list. Write appropriate accessor and mutator functions
for these member variables. Demonstrate an object of the
CustomerData class in a simple program.

<b>Part 2</b>

PreferredCustomer Class

A retail store has a preferred customer plan where customers
may earn discounts on all their purchases. The amount of a
customer’s discount is determined by the amount of the
customer’s cumulative purchases in the store.
* When a preferred customer spends $500, he or she gets a
5% discount on all future purchases.
* When a preferred customer spends $1000, he or she gets a
6% discount on all future purchases.
* When a preferred customer spends $1500, he or she gets a
7% discount on all future purchases.
* When a preferred customer spends $2000, he or she gets a
10% discount on all future purchases.

Design a class named PreferredCustomer, which is derived from
the CustomerData class you previously created. The
PreferredCustomer class should have the following member
variables:
* purchasesAmount ( a double)
* discountLevel (a double)

The purchasesAmount variable holds the total of a customer’s
purchases to date. The discountLevel variable should be set to
the correct discount percentage, according to the store’s
preferred customer plan. Write appropriate member functions
for this class and demonstrate it in a simple program.

<b><i>Input validation: Do not accept negative values for any sale
figures.</b></i>
