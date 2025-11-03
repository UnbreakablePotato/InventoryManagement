#pragma once
#include <string>
#include <cctype>
#include <stdexcept>

class Item 
{
private:
	std::string name;
	double price{};
	std::string itemCode;
public:
	Item(std::string newName, double newPrice, std::string newItemCode);
	~Item();
	std::string getItemName();
	void setItemName(std::string setNewName);
	double getItemPrice();
	void setItemPrice(double setNewPrice);
	std::string getItemCode();
	void setItemCode(std::string setNewItemCode);
	virtual void itemType();
	Item(){}

};

class foodItem : public Item
{
private:
	std::string expirationDate;
	bool isVegetarian;
public:
	foodItem(std::string newName, double newPrice, std::string newItemCode, std::string newExpirationDate, bool isVegi);
	~foodItem();
	std::string getExpirationDate();
	void setExpirationDate(std::string newExpirationDate);
	bool getVegetarianStatus();
	void setVegitarianStatus(bool isVegi);
	void itemType();
};

class electronicItem : public Item
{
private:
	bool isWireless;
	std::string powerSource;
private:
	electronicItem(std::string newName, double newPrice, std::string newItemCode, bool isWire, std::string sourceofpower);
	~electronicItem();
	bool getIsWireless();
	void setIsWirelss(bool isWire);
	std::string getPowerSource();
	void setPowerSource(std::string setPower);
	void itemType() override;
};

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

