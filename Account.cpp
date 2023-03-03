#include "Account.h"
using bank_account_info::Account;
int Account::next_ID = 1;

Account::Account() : account_ID {0},  account_name {}, account_balance{0.0} {}
// Account::Account(int account_ID, string account_name, float account_balance) : account_ID {}, account_name {}, account_balance{} {}

void Account::account_info()
{
	cout << "Enter the name: ";
	cin >> account_name;
	cout << endl << "Enter the balance: ";
	cin >> account_balance;
	account_ID = next_ID++;
	// cout << account_ID << endl; 
}
void Account::account_display() const
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout << setprecision(2);
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
