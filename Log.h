#pragma once
#include "Message.h"
#include "Status.h"
#include "Money.h"
#include "Status.h"
#include "Message.h"

class Log
{
public:
	Log();
	void logSend(Message message);
	void logResponse(Status status);
	void logCashDispensed(Money amount);
	void logEnvelopeAccepted();
};

