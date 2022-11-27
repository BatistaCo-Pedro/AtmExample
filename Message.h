#pragma once
#include <string>
#include "Card.h"
#include "Money.h"

using namespace std;

class Message
{
private:
	int messageCode;
	Card card;
	int pin;
	int serialNumber;
	int fromAccount;
	int toAccount;
	int amount;
public:
	const int WITHDRAWAL;
	const int INITIATE_DEPOSIT;
	const int COMPLETE_DEPOSIT;
	const int TRANSFER;
	const int INQUIRY;

	Message(int messageCode, Card cardNumber, int pin, int serialNumber,
		int fromAccount, int toAccount, Money amount);
	string toString();
	void setPin(int pin);
	int getMessageCode();
	Card getCard();
	int getPIN();
	int getSerialNumber();
	int getFromAccount();
	int getToAccount();
	Money getAmount();
};

