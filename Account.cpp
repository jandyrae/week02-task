#include "Account.h"
using bank_account_info::Account;
int Account::next_ID = 1;

Account::Account() : account_ID {0},  account_name {}, account_balance{0.0} {}
	// The account class will have a constructor that takes no parameters. 
	// This constructor will initialize the data members to empty values.
	//account_name = "";
	//account_balance = 0;
// Account::Account(int account_ID, string account_name, float account_balance) : account_ID {}, account_name {}, account_balance{} {}
/*
void Account::set_account_name(string account_name)
{
	cout << "Enter the name: ";
	cin >> account_name;
}
void Account::set_account_balance(float account_balance)
{
	cout << endl << "Enter the balance: ";
	cin >> account_balance;
}

string Account::get_account_name() const
{
	return account_name;
}
float Account::get_account_balance()
{
	return account_balance;
}
*/
void Account::account_info()
{
//	Account::set_account_balance(account_balance);
//	Account::get_account_balance();
//	Account::set_account_name(account_name);
//	Account::get_account_balance();
	// method that prompts the user to enter the name and the initial balance
	
	cout << "Enter the name: ";
	cin >> account_name;
	cout << endl << "Enter the balance: ";
	cin >> account_balance;
	account_ID = next_ID++;
	// cout << account_ID << endl; // debug line to show what account_ID was saved as
}
/*
int Account::get_account_id() 
{
	int num = 1;
	account_ID += num++;
	return account_ID ;
}*/
void Account::account_display() const
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
