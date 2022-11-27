#pragma once
#include "Atm.h"
#include "Money.h"

class OperatorPanel
{
private:
	Atm atm;
public:
	OperatorPanel(Atm atm);
	Money getInitalCash();
};

