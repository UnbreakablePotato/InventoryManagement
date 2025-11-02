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
	std::cout << Item::getItemCode() << " has been destroyed" << "\n";
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
	std::cout << "Food item " << foodItem::getItemName() << " has been destroyed" << "\n";
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
	std::cout << "Electronic item " << electronicItem::getItemName() << " has been destroyed" << "\n";
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





