#include "Balances.h"
#include <iostream>
#include "Money.h"

Money Balances::getAvailable() { return available; }

Money Balances::getTotal() { return total; }

void Balances::setBalances(Money total, Money available) {
	this->total = total;
	this->available = available;
}