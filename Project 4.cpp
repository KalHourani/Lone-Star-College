/*Program that creates a customer structure with members: name, address, city, state, zip, phone, balance, and last_payment
   and prompts the user to choose between entering account information, changing account information, displaying all account
   information, or terminating the program.
 */

#include <iostream>
#include <string>
#include <limits>

using namespace std;

//global variables

struct customer
{
								string name;
								string address;
								string city;
								string state;
								string zip;
								string phone;
								double balance;
								string last_payment;
};

const int MAXIMUM_NUMBER_OF_CUSTOMERS = 20;
customer *Customers = new customer[MAXIMUM_NUMBER_OF_CUSTOMERS];
int number_of_customers = 0; //keeps track of number of customers created

//function prototypes
void new_customer();
void change_customer();
void display_all();
void input_customer(customer*);
void display_customer(customer);




int main()
{
								while (true)
								{
																int input;
																cout << "What would you like to do?" << endl;
																cout << "1. Enter new account information" << endl;
																cout << "2. Change account information" << endl;
																cout << "3. Display all account information" << endl;
																cout << "4. Exit the program" << endl;
																cin >> input;
																if (input == 1)
																{
																								new_customer();
																}
																else if (input == 2)
																{
																								change_customer();
																}
																else if (input == 3)
																{
																								display_all();
																}
																else if (input == 4)
																{
																								return 0; //terminate program
																}
																else //input validation
																{
																								cin.clear(); //reset cin state flag
																								cin.ignore(numeric_limits<streamsize>::max(), '\n'); //reset input
																								cout << "Invalid input. Please select a valid input." << endl;
																}
								}
								return 0;
}

void input_customer(customer* Customer)
//prompt user to input values for members of Customer
{
								cin.clear(); //reset cin state flag
								cin.ignore(numeric_limits<streamsize>::max(), '\n'); //reset input
								cout << "Customer name: ";
								getline(cin, Customer->name);

								cout << "Customer address: ";
								getline(cin, Customer->address);

								cout << "City: ";
								getline(cin, Customer->city);

								cout << "State: ";
								getline(cin, Customer->state);

								cout << "ZIP code: ";
								getline(cin, Customer->zip);

								cout << "Telephone: ";
								getline(cin, Customer->phone);

								cout << "Account balance: ";
								double balance; //initialize double for storing input
								cin >> balance;
								while ((cin.fail()) || (balance < 0.)) //input validation
								{
																cout << "Invalid input. Please input a non-negative number." << endl;
																cin.clear(); //reset cin state flag
																cin.ignore(numeric_limits<streamsize>::max(), '\n'); //reset input
																cin >> balance;
								}
								Customer->balance = balance;
								cin.clear(); //reset cin state flag
								cin.ignore(numeric_limits<streamsize>::max(), '\n'); //reset input
								cout << "Date of last payment: ";
								getline(cin, Customer->last_payment);
}

void display_customer(customer Customer)
{
								cout << "Customer name: " << Customer.name << endl;
								cout << "Customer address: " << Customer.address << endl;;
								cout << "City: " << Customer.city << endl;
								cout << "State: " << Customer.state << endl;
								cout << "ZIP code: " << Customer.zip << endl;
								cout << "Telephone: " << Customer.phone << endl;
								cout << "Account balance: " << Customer.balance << endl;
								cout << "Date of last payment: " << Customer.last_payment << endl;
}

void new_customer()
//sets members of Customers[number_of_customers], then increments number_of_customers.
{

								input_customer(&Customers[number_of_customers]);

								cout << "You have entered information for customer number " << number_of_customers << endl;

								number_of_customers++;
}

void change_customer()
{
								int customer_number;
								cout << "Customer number: " << endl;
								cin >> customer_number;
								while ((cin.fail()) || (customer_number >= number_of_customers) || (customer_number < 0)) //input validation.
								{
																cin.clear(); //reset cin state flag
																cin.ignore(numeric_limits<streamsize>::max(), '\n'); //reset input
																cout << "Customer number must be between 0 and " << number_of_customers - 1 << "." << endl;
																cout << "Please input a valid customer number:" << endl;
																cin >> customer_number;
								}

								display_customer(Customers[customer_number]);
								cout << "\n\n";

								input_customer(&Customers[customer_number]);

}

void display_all()
//displays members of all customers in Customers array
{
								string _; //initialize string for storing input
								cin.clear(); //reset cin state flag
								cin.ignore(numeric_limits<streamsize>::max(), '\n'); //reset input
								for (int customer_number = 0; customer_number < number_of_customers; customer_number++)
								{
																display_customer(Customers[customer_number]);
																cout << "Press enter to continue..." << endl;
																getline(cin, _); //calls getline which ends when user presses enter
								}
}
