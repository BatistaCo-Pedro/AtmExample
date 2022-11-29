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
	Money amount;
public:
	inline const int WITHDRAWAL = 0;
	const int INITIATE_DEPOSIT = 1;
	const int COMPLETE_DEPOSIT = 2;
	const int TRANSFER = 3;
	const int INQUIRY = 4;

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

