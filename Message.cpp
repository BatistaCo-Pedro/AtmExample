#include "Message.h"

Message::Message(int messageCode, Card cardNumber, int pin, int serialNumber,
	int fromAccount, int toAccount, Money amount) {
	this->messageCode = messageCode;
	this->card = cardNumber;
	this->pin = pin;
	this->serialNumber = serialNumber;
	this->fromAccount = fromAccount;
	this->toAccount = toAccount;
	this->amount = amount;
}

string Message::toString() {
    string result = "";

    switch (messageCode)
    {
        case WITHDRAWAL:
            result += "WITHDRAW";
            break;
        case INITIATE_DEPOSIT:
            result += "INIT_DEP";
            break;
        case COMPLETE_DEPOSIT:
            result += "COMP_DEP";
            break;
        case TRANSFER:
            result += "TRANSFER";
            break;
        case INQUIRY:
            result += "INQUIRY ";
            break;
    }

    result += " CARD# " + card.getNumber();
    result += " TRANS# " + serialNumber;
    if (fromAccount >= 0)
        result += " FROM  " + fromAccount;
    else
        result += " NO FROM";
    if (toAccount >= 0)
        result += " TO  " + toAccount;
    else
        result += " NO TO";
    if (!amount.lessEqual(Money(0)))
        result += " " + amount.toString();
    else
        result += " NO AMOUNT";

    return result;
}

void Message::setPin(int pin) {
	this->pin = pin;
}

int Message::getMessageCode() { return this->messageCode; }

Card Message::getCard() { return this->card; }

int Message::getPIN() { return this->pin; }

int Message::getSerialNumber() { return this->serialNumber; }

int Message::getFromAccount() { return this->fromAccount; }

int Message::getToAccount() { return this->toAccount; }

Money Message::getAmount() { return this->amount; }