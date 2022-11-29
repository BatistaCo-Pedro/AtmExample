#include "CustomerConsole.h"
#include <string>
#include <iostream>

CustomerConsole::CustomerConsole() {}

void CustomerConsole::display(std::string message) {
	std::cout << message << endl;
}

int CustomerConsole::readPin(std::string prompt) {

}

int CustomerConsole::readMenuChoice(std::string prompt, vector<std::string> menu) {

}

Money CustomerConsole::readAmount(std::string prompt) {

}