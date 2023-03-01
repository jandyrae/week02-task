#include "Account.h"
using bank_account_info::Account;
// int Account::account_ID = 0;

Account::Account() : account_ID{}, account_name{}, account_balance{} {
	// The account class will have a constructor that takes no parameters. 
	// This constructor will initialize the data members to empty values.
	account_name = "";
	account_balance = 0;
}
void Account::account_info(string account_name, float account_balance)
{
	// method that prompts the user to enter the name and the initial balance
	cout << "Enter the name: ";
	cin >> account_name;
	cout << endl << "Enter the balance: ";
	cin >> account_balance;
	account_ID += ++num;
};
string Account::account_display()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout << setprecision(2);
	// method that will display the account information
	cout << endl << "Account ID : " << account_ID << "   Name: " << account_name << "   Balance: $" << account_balance << endl;
};
void Account::account_deposit(float deposit) 
{
	cout << "Amount to deposit: $";
	cin >> deposit;
	account_balance += deposit;
};
void Account::account_withdrawl(float withdrawl)
{
	cout << "Amount to withdraw: $";
	cin >> withdrawl;
	account_balance -= withdrawl;
};
