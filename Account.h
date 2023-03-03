#pragma once
#include <stdlib.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

namespace bank_account_info {
	class Account {
	private:
		int account_ID; 
		string account_name;
		float account_balance;
		static int next_ID;

	public:
		Account();
		void account_info(void);
		void account_display(void) const;
		void account_deposit(float deposit);
		void account_withdrawl(float withdrawl);
	};
}

