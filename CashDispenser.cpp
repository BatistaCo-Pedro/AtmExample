#include "CashDispenser.h"
#include "Log.h"

CashDispenser::CashDispenser(Log log) {
	this->log = log;
	this->cashOnHand = Money(0);
}

void CashDispenser::setInitialCash(Money initialCash) {
	this->cashOnHand = initialCash;
}

void CashDispenser::dispenseCash(Money amount) {
	this->cashOnHand.subtract(amount);
	log.logCashDispensed(amount);
}

bool CashDispenser::checkCashOnHand(Money amount) {
	return amount.lessEqual(cashOnHand);
}