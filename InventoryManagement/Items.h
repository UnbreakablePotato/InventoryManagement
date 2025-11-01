#pragma once
#include <string>
class Item {
private:
	std::string name;
	int price;
	std::string itemCode;
public:
	Item(std::string newName, int newPrice, std::string newItemCode);
	~Item();
	std::string getItemName();
	void setItemName(std::string setNewName);
	int getItemPrice();
	void setItemPrice(int setNewPrice);
	std::string getItemCode();
	void setItemCode(std::string setNewItemCode);

};