#pragma once
#include <string>

using namespace std;

class Status
{
public:
	string toString();
	bool isSuccess();
	bool isInvalidPIN();
	string getMessage();
};

