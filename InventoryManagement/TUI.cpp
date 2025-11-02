#include <iostream>
#include "TUI.h"

void introTUI()
{
	std::cout << "================================" << "\n";
	std::cout << "Welcome to the inventory system!" << "\n";
	std::cout << "================================" << "\n";
}

void options()
{
	std::cout << "If you would like to see the full inventory list, press 1" << "\n";
	std::cout << "If you would like to add an item, press 2" << "\n";
	std::cout << "If you would like to delete an item, press 3" << "\n";
	std::cout << "If you would like to quit the program, press q" << "\n";
}