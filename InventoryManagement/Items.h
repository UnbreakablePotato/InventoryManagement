#pragma once
#include <string>
class Item {
private:
	std::string name;
	int price;
	std::string itemCode;
public:
	Item(std::string newName, int newPrice, std::string newItemCode);
	std::string getItemName();
	~Item();
	int getItemPrice();
	std::string getItemCode();
};