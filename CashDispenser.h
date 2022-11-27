#pragma once
#include "Log.h"
#include "Money.h"

class CashDispenser
{
	private:	
		Log log;
		Money cashOnHand;
	public:
		CashDispenser(Log log);
		void setInitalCash(Money initialCash);
		bool checkCashOnHand(Money amount);
		void dispenseCash(Money amount);
};

