#pragma once
#include "Message.h"
#include "Money.h"
#include "Receipt.h"
#include "Atm.h"
#include "Session.h"
#include "Card.h"

class Withdrawal
{
private:
	int from;
	Money amount;
public:
	Withdrawal(Atm atm, Session session, Card card, int pin);
protected:
	Message getSpecificsCustomer(); //Throws Cancelled
	Receipt completeTransaction();
};