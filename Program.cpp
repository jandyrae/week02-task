#include <iostream>
#include <string>
#include <stdlib.h>
#include "Account.h"
using std::cout;
using std::cin;
using std::endl;
using namespace std;
using bank_account_info::Account;

int main()
{
	int option;
	float deposit{}, withdrawl{};
	bool open_transaction = true;
	Account new_account;

	new_account.account_info();
	
	while (open_transaction) {
		
		cout << endl << "Account menu: ";
		cout << endl << "0. Quit Program";
		cout << endl << "1. Display Account Information";
		cout << endl << "2. Add a deposit to an account";
		cout << endl << "3. Withdraw from an account";
		cout << endl << "Your choice: ";
		cin >> option;
		switch (option)
		{
		case 0:
			// option '0' - Program should quit
			cout << "\nThank you for visiting our bank. \nCome back soon! \n";
			open_transaction = false;
			break;

		case 1:
			// option '1' - Program should display account information
			new_account.account_display();
			break;

		case 2:
			// option '2' - Program should prompt for a deposit amount
			new_account.account_deposit(deposit);
			break;

		case 3:
			// option '3' - Program should prompt for a withdrawal amount
			new_account.account_withdrawl(withdrawl);
			break;

		default:
			// none of the above
			break;
		}
	}
	
}