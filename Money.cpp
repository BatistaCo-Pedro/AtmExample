#include "Money.h"
#include <string>

Money::Money(int dollars) {
	this->cents = dollars / 100;
}

Money::Money(int dollars, int cents) {
	this->cents = dollars / 100 + cents;
}

Money Money::Copy(Money toCopy) {
	return toCopy;
}

string Money::toString() {
	return this->cents + " ";
}

void Money::add(Money amountToAdd) {
	this->cents += amountToAdd.cents;
}

void Money::subtract(Money amountToSubtract) {
	this->cents -= amountToSubtract.cents;
}

bool Money::lessEqual(Money compareTo) {
	return (this->cents == compareTo.cents || this->cents < compareTo.cents) ? true : false;
}