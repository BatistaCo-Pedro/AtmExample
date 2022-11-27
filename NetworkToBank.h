#pragma once
#include "Log.h"
#include "Status.h"
#include "InetAddress.h"
#include "Balances.h"

class NetworkToBank
{
private:
	Log log;
	InetAddress bankAddress;
public:
	NetworkToBank(Log log, InetAddress bankAddress);
	void openConnection();
	void closeConnection();
	Status sendMessage(Message message, Balances balances);
};

