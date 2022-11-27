#pragma once
#include <string>
#include "Atm.h"
#include "Card.h"
#include "Transaction.h"
#include "Balances.h"
#include <vector>

using namespace std;

class Receipt
{
private:
	vector<string> headingPortion;
	vector<string> balancesPortion;
protected:
	string detalisPortion;
	Receipt(Atm atm, Card card, Transaction transaction, Balances balances);
};