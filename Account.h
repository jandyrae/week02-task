#pragma once
#include <stdlib.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

namespace bank_account_info {
	class Account {
	private:
		int account_ID; // how to increment and hold last value - static?
		string account_name;
		float account_balance;
		static int next_ID;

	public:
		Account();
		// void set_account_name(string account_name);
		// void set_account_balance(float account_balance);
		// string get_account_name() const;
		// float get_account_balance();
		// int get_account_id();

		void account_info(void);
		void account_display(void) const;
		void account_deposit(float deposit);
		void account_withdrawl(float withdrawl);
	};
}

