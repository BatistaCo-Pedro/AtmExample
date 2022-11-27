#pragma once
#include "Log.h"

class EnvelopeAcceptor
{
private:
	Log log;
public:
	EnvelopeAcceptor(Log log);
	void acceptEnvelope(); //throws Cancelled Exception
};

