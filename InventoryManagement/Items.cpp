#include <iostream>
#include "Items.h"

double foodTax = 0.05;

//Member functions for the Item class
Item::Item(std::string newName, double newPrice, std::string newItemCode) :
	name(newName),
	price(newPrice),
	itemCode(newItemCode)
{
}

Item::~Item()
{
	//std::cout << Item::getItemCode() << " has been destroyed" << std::endl;
}

std::string Item::getItemName()
{
	return name;
}

void Item::setItemName(std::string setNewName)
{
	name = setNewName;
}

double Item::getItemPrice()
{
	return price;
}

void Item::setItemPrice(double setNewPrice)
{
	price = setNewPrice;
}

std::string Item::getItemCode()
{
	return itemCode;
}

void Item::setItemCode(std::string setNewItemCode)
{
	itemCode = setNewItemCode;
}

void Item::itemType()
{
	std::cout << "Item has type GENERIC" << "\n";
}

//Member functions for the foodItem class

foodItem::foodItem(std::string newName, double newPrice, std::string newItemCode, std::string newExpirationDate, bool isVegi) :
	Item(newName, newPrice, newItemCode),
	expirationDate(newExpirationDate),
	isVegetarian(isVegi)
{
}

foodItem::~foodItem()
{
	//std::cout << "Food item " << foodItem::getItemName() << " has been destroyed" << "\n";
}

std::string foodItem::getExpirationDate()
{
	return expirationDate;
}

void foodItem::setExpirationDate(std::string newExpirationDate)
{
	expirationDate = newExpirationDate;
}

bool foodItem::getVegetarianStatus()
{
	return isVegetarian;
}

void foodItem::setVegitarianStatus(bool isVegi)
{
	isVegetarian = isVegi;
}

void foodItem::itemType()
{
	std::cout << "Item has type FOOD" << "\n";
}

//Member functions for electronicItem class

electronicItem::electronicItem(std::string newName, double newPrice, std::string newItemCode, bool isWire, std::string sourceofpower) :
	Item(newName, newPrice, newItemCode),
	isWireless(isWire),
	powerSource(sourceofpower)
{
}

electronicItem::~electronicItem()
{
	//std::cout << "Electronic item " << electronicItem::getItemName() << " has been destroyed" << "\n";
}

bool electronicItem::getIsWireless()
{
	return isWireless;
}

void electronicItem::setIsWirelss(bool isbluetoof)
{
	isWireless = isbluetoof;
}

std::string electronicItem::getPowerSource()
{
	return powerSource;
}

void electronicItem::setPowerSource(std::string setPower)
{
	powerSource = setPower;
}

void electronicItem::itemType()
{
	std::cout << "Item type is ELECTRONIC";
}

bool isValidItemCode(const std::string& newItemCode)
{
	if (newItemCode.size() != 6) {
		return false;
	}
	else if (!std::isalpha(newItemCode[0]) || !std::isalpha(newItemCode[1])) {
		return false;
	}
	for (size_t i = 2; i < 6; i++) {
		if (!std::isdigit(newItemCode[i])) return false;
	}
	return true;
}

bool isValidExpirationDate(const std::string& newExpiration)
{
	if (newExpiration.size() != 10) {
		return false;
	}
	else if (!std::isdigit(newExpiration[0]) || !std::isdigit(newExpiration[1]) || !std::isdigit(newExpiration[3]) || !std::isdigit(newExpiration[4]) || !std::isdigit(newExpiration[6]) || !std::isdigit(newExpiration[7])
		|| !std::isdigit(newExpiration[8]) || !std::isdigit(newExpiration[9])) {
		return false;
	}
	else if (newExpiration[2] != '/' || newExpiration[5] != '/') {
		return false;
	}
	return true;
}


std::string enterName()
{
	std::cout << "Enter the name of your item: ";

	std::string itemName{};

	std::cin >> itemName;

	std::cout << "\n";

	return itemName;
}

double enterPrice()
{
	std::cout << "Enter the price of your item: ";

	double price{};

	std::cin >> price;

	std::cout << "\n";

	return price;
}

std::string enterItemCode()
{
	std::cout << "Enter a valid item code: ";

	std::string itemCode{};

	std::cin >> itemCode;
	std::cout << "\n";

	while (!isValidItemCode(itemCode)) {
		std::cout << "The item code is not valid..." << "\n";
		std::cout << "The structure of a valid item code is two characters followed by four digits" << "\n";
		std::cout << "Like so... AA0000. Try again: ";
		std::cin >> itemCode;
	}

	return itemCode;
}

std::string enterExpirationDate()
{
	std::cout << "Enter a valid expiration date ";

	std::string expirationDate{};

	std::cin >> expirationDate;

	std::cout << "\n";

	while (!isValidExpirationDate(expirationDate)) {
		std::cout << "The expiration date is not valid..." << "\n";
		std::cout << "The structure of a valid expiration date is like so... 20/05/2025. Try again: ";
		std::cin >> expirationDate;
	}

	return expirationDate;
}

bool enterVegitarian()
{
	std::cout << "If the item is vegitarian, press 1, if not, press any other digit: ";

	int digit{};

	std::cin >> digit;

	std::cout << "\n";

	if (digit != 1) {
		return false;
	}

	return true;
}

bool enterWireless()
{
	std::cout << "If the item is wireless, press 1, if not, press any other digit: ";

	int digit{};

	std::cin >> digit;

	std::cout << "\n";

	if (digit != 1) {
		return false;
	}

	return true;
}


std::string enterPowerSource()
{
	std::cout << "Enter the power source of your item: ";

	std::string powersource{};

	std::cin >> powersource;

	std::cout << "\n";

	return powersource;
}



