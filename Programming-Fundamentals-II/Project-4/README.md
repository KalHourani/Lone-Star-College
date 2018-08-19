#Customer Accounts

Write a program that uses a structure to store the following data about a customer account:

     Customer name 
     Customer address
     City
     State
     ZIP code
     Telephone
     Account balance
     Date of last payment

The program should use an array of at least 20 structures. It should let the user enter data into the array , change the contents of any element , and display all the data stored in the array. The program should have a menu-driven user interface.

<b>Prompts</b> And Output Labels. Your main menu should be the following:
     1. Enter new account information
     2. Change account information
     3. Display all account information
     4. Exit the program 
The user is expected to enter 1 or 2 or 3 or 4.
The main menu is displayed at the start of the program and after the handling of choices 1, 2 and 3.

<b>If 1 is entered for the main menu,</b> the program prompts for each of the data listed above, in the order listed above, using the above data descriptions (e.g. "ZIP code") as prompts (followed in each case by a colon). After reading in and processing the data, the program prints
     You have entered information for customer number X
where X is the customer number: 0 for the first customer and increasing by 1 for each subsequent customer that is entered.

<b>If 2 is entered for the main menu,</b> the program prompts for the customer number:

     Customer number: 
     
Upon entering a valid customer number the program displays all the data for the particular customer that has been saved:

     Customer name : ...
     Customer address: ...
     City: ...
     State: ...
     ZIP code: ...
     Telephone: ...
     Account balance: ...
     Date of last payment: ...

The program then skips one or two lines and prompts for a change, using the same prompts as in choice 1 above for all the data items associated with a customer.

<b>If 3 is entered for the main menu,</b> the program displays all the data for each customer that has been saved, using the display format in choice 2 above. After the display of each customer the program prompts "Press enter to continue..." and waits for the user to hit return.

<b>If 4 is entered for the main menu,</b> the program terminates.

<b>Input Validation (OPTIONAL).</b> When the data for a new account is entered, be sure the user enters data for all the fields. No negative account balances should be entered.
