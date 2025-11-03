#include <iostream>
#include "Inventory.h"

void Inventory::pushGenericItem()
{
	std::string itemName = enterName();

	double price = enterPrice();

	std::string itemCode = enterItemCode();

	Item genItem(itemName, price, itemCode);

	genericInventory.push_back(genItem);

}

void Inventory::pushFoodItem()
{
	std::string itemName = enterName();

	double price = enterPrice();

	std::string itemCode = enterItemCode();

	std::string expiration = enterExpirationDate();

	bool isVegitarian = enterVegitarian();

	foodItem foodItem(itemName, price, itemCode,expiration,isVegitarian);

	foodInventory.push_back(foodItem);

}

void Inventory::pushElectronicItem()
{
	std::string itemName = enterName();

	double price = enterPrice();

	std::string itemCode = enterItemCode();

	bool isWired = enterWireless();

	std::string powersource = enterPowerSource();

	electronicItem elecItem(itemName, price, itemCode, isWired, powersource);

	electronicInventory.push_back(elecItem);

}