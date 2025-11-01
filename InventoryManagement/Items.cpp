#include <iostream>
#include "Items.h"

Item::Item(std::string newName, int newPrice, std::string newItemCode) :
	name(newName),
	price(newPrice),
	itemCode(newItemCode)
{
}

Item::~Item()
{
	std::cout << Item::getItemCode() << " has gone out of scope" << "\n";
}

std::string Item::getItemName()
{
	return name;
}

void Item::setItemName(std::string setNewName)
{
	name = setNewName;
}

int Item::getItemPrice()
{
	return price;
}

void Item::setItemPrice(int setNewPrice)
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