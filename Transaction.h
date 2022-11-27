#pragma once
#include <string>
#include <vector>
#include "Atm.h"
#include "Session.h"
#include "Card.h"
#include "Message.h"
#include "Balances.h"
#include "Receipt.h"
#include "Status.h"

using namespace std;

class Transaction
{
protected:
	Atm atm;
	Session session;
	Card card;
	int pin;
	int serialNumber;
	Message message;
	Balances balances;
	Transaction(Atm atm, Session session, Card card, int pin);
	Message getSpecificsFromCustomer(); //throws Cancelled
	Receipt competeTransaction(); //throws Cancelled
private:
	const vector<string> TRANSACTION_TYPES_MENU;
	int nextSerialNumber;
	int state;
	const int GETTING_SPECIFICS_STATE;
	const int SENDING_TO_BANK_STATE;
	const int INVALID_PIN_STATE;
	const int COMPLETING_TRANSACTION_STATE;
	const int PRINTING_RECEIPT_STATE;
	const int ASKING_DO_ANIOTHER_STATE;
public:
	Transaction makeTransaction(Atm atm, Session session, Card card, int pin); //throws Cancelled
	bool performTransaction(); //Throws CardRetained
	Status performInvalidPinExtension(); //Throws Cancelles, CardRetained
	int getSerialNumber();
};