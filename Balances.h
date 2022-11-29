#pragma once
#include "Money.h"

class Balances
{
	private:
		Money total;
		Money available;
	public:
		inline Balances() {}
		void setBalances(Money total, Money available);
		Money getTotal();
		Money getAvailable();
};

