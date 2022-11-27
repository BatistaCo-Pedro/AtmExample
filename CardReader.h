#pragma once
#include "Atm.h"

class CardReader
{
	private:
		Atm atm;
	public:
		CardReader(Atm atm);
		Card readCard();
		void ejectCard();
		void retainCard();
};

