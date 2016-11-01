/*This program prompts the user to input a five-digit combination, which is this week's
   winning lottery combination, then compares it to the following "lucky"
   combinations:
   13579 26791 26792 33445 55555 62483 77777 79422 85647 93121
 */

#include <iostream>
#include <algorithm>

using namespace std;

//function prototypes
int lucky_combinations[] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
bool won_lottery(int winning_number, int tickets_bought[] = lucky_combinations,
																	int number_of_tickets_bought = 10);

int main()
{
								int winning_number;
								cout << "Input this week's winning lottery ticket number: ";
								cin >> winning_number;
								bool is_winner = won_lottery(winning_number);
								if (is_winner)
								{
																cout << "You won! " << winning_number << " was a winning ticket!" << endl;
								}
								else
								{
																cout << "You did not win this week." << endl;
								}
								return 0;
}

bool compare_tickets(int ticket1, int ticket2, int length = 5)
//compares tickets to see if they match; default ticket is 5 digits
{
								int Ticket1[length], Ticket2[length]; //initialize arrays for comparison of tickets
								for (int i = 0; i < length; i++)
								{
																Ticket1[i] = ticket1 % 10; //adds last digit of ticket to array
																Ticket2[i] = ticket2 % 10;
																ticket1 = ticket1 / 10; //removes last digit from ticket
																ticket2 = ticket2 / 10;
								}
								sort(Ticket1, Ticket1 + length); //order ticket arrays for comparison
								sort(Ticket2, Ticket2 + length);
								for (int i = 0; i < length; i++)
								//compare ticket arrays by element. If any elements don't match,
								//return false. If they all match, return true.
								{
																if (Ticket1[i] != Ticket2[i])
																{
																								return false;
																}
								}
								return true;
}

bool won_lottery(int winning_number, int tickets_bought[], int number_of_tickets_bought)
//performs linear search of tickets_bought, comparing winning_number to elements
//of tickets_bought to see if player has a winning ticket.
{
								for (int i = 0; i < number_of_tickets_bought; i++)
								//compare winning_number to ith ticket. If tickets match,
								//return true. If none match, return false.
								{
																if (compare_tickets(winning_number, tickets_bought[i]))
																{
																								return true;
																}
								}
								return false;
}
