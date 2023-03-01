#pragma once
#include <stdlib.h>
#include <string>
#include <iostream>
#include<iomanip>
using namespace std;

namespace bank_account_info {
	class Account {
	private:
		static int account_ID; // how to increment and hold last value - static?
		int	num = 0; 
		string account_name;
		float account_balance;

	public:
		Account();
		void account_info(string, float);
		string account_display(void);
		void account_deposit(float);
		void account_withdrawl(float);
	};
}

