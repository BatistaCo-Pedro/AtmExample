#pragma once
#include <string>
#include "Money.h"
#include <vector>

using namespace std;

class CustomerConsole
{
public:
	CustomerConsole();
	void display(string message);
	int readPin(string prompt); //throws Cancelled Exception
	int readMenuChoice(string prompt, vector<string> menu); //throws Cancelled Exception
	Money readAmount(string promp); //throws Cancelled Exception
};

