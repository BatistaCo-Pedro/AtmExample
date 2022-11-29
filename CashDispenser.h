#pragma once
#include "Log.h"
#include "Money.h"

class CashDispenser
{
	private:	
		Log log;
		Money cashOnHand;
	public:
		inline CashDispenser() {}
		CashDispenser(Log log);
		void setInitialCash(Money initialCash);
		bool checkCashOnHand(Money amount);
		void dispenseCash(Money amount);
};

