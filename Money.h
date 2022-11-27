#pragma once
#include <string>

using namespace std;

class Money
{
private:
	long cents;
public:
	Money(int dollars);
	Money(int dollars, int cents);
	
	Money Copy(Money toCopy);
	string toString();
	void add(Money amountToAdd);
	void subtract(Money amountToSubtract);
	bool lessEqual(Money compareTo);
};