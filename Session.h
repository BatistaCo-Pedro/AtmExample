#pragma once
#include "Atm.h"

class Session
{
private:
	Atm atm;
	int pin;
	int state;
	const int READING_CARD_STATE;
	const int READING_PIN_STATE;
	const int CHOOSING_TRANSACTION_STATE;
	const int PERFORMING_TRANSACTION_STATE;
	const int EJECTING_CARD_STATE;
	const int FINAL_STATE;
public:
	Session(Atm atm);
	void performSession();
	void setPin(int pin);
};

