#pragma once
#include "Message.h"
#include "Money.h"
#include "Receipt.h"
#include "Atm.h"
#include "Session.h"
#include "Card.h"

class Inquiry
{
private:
	int from;
public:
	Inquiry(Atm atm, Session session, Card card, int pin);
protected:
	Message getSpecificsCustomer(); //Throws Cancelled
	Receipt competeTransaction();
};
