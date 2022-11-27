#pragma once
#include <string>
#include "CardReader.h"
#include "Card.h"
#include "CashDispenser.h"
#include "CustomerConsole.h"
#include "EnvelopeAcceptor.h"
#include "NetworkToBank.h"
#include "OperatorPanel.h"
#include "ReceiptPrinter.h"
#include "InetAddress.h"

using namespace std;

class Atm
{
private:
	int id;
	string place;
	string bankName;
	InetAddress bankAddress;
	CardReader cardReader;
	CashDispenser cashDispenser;
	CustomerConsole customerConsole;
	EnvelopeAcceptor envelopeAcceptor;
	Log log;
	NetworkToBank networkToBank;
	OperatorPanel operatorPanel;
	ReceiptPrinter receiptPrinter;
	int state;
	bool switchOn;
	bool cardInserted;
	const int OFF_STATE;
	const int IDLE_STATE;
	const int SERVING_CUSTOMER_STATE;
public:
	Atm(int id, string place, string bankName, InetAddress bankAddress);
	void run();
	void switchOn();
	void switchOff();
	void cardInserted();

	int getId();
	string getPlace();
	string getBankName();
	CardReader getCardReader();
	CashDispenser getCashDispenser();
	CustomerConsole getCustomerConsole();
	EnvelopeAcceptor getEnvelopeAcceptor();
	Log getLog();
	NetworkToBank getNetworkToBank();
	OperatorPanel getOperatorPanel();
	ReceiptPrinter getReceiptPrinter();
	void performStartup();
	void performShutdown();
};