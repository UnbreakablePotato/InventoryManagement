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

//Member functions for the foodItem class

foodItem::foodItem(std::string newName, double newPrice, std::string newItemCode, std::string newExpirationDate, bool isVegi) :
	Item(newName, newPrice, newItemCode),
	expirationDate(newExpirationDate),
	isVegetarian(isVegi)
{
}

foodItem::~foodItem()
{
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




