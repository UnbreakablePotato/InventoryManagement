#pragma once
#include <vector>
#include "Items.h"

class Inventory
{
private:
	std::vector<Item> genericInventory;
	std::vector<foodItem> foodInventory;
	std::vector<electronicItem> electronicInventory;
public:
	Inventory() = default;
	~Inventory(){}
	void pushGenericItem();
	void pushFoodItem();
	void pushElectronicItem();
	void deleteGenericItem();
	void deleteFoodItem();
	void deleteElectronicItem();
	void listGenericItems();
	void listFoodItems();
	void listElectronicItems();
	void listAll(Inventory T);
};