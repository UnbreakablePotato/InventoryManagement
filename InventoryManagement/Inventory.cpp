#include <iostream>
//#include "Items.h"
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

//List member functions

void Inventory::listGenericItems()
{
	int count{-1};
	for (auto i : genericInventory) {
		count++;
		std::cout << count << ". " << i.getItemName() << "\n";
	}
}

void Inventory::listFoodItems()
{
	int count{ -1 };
	for (auto i : foodInventory) {
		count++;
		std::cout << count << ". " << i.getItemName() << "\n";
	}
}

void Inventory::listElectronicItems()
{
	int count{ -1 };
	for (auto i : electronicInventory) {
		count++;
		std::cout << count << ". " << i.getItemName() << "\n";
	}
}

//Delete member functions

void Inventory::deleteGenericItem()
{
	std::cout << "Type the number of the item you wish to delete ";
	int input{};
	std::cin >> input;
	std::cout << "\n";

	genericInventory.erase(genericInventory.begin() + input);

	std::cout << "\n";

	std::cout << "Item number " << input << " deleted...";
}

void Inventory::deleteFoodItem()
{
	std::cout << "Type the number of the item you wish to delete ";
	int input{};
	std::cin >> input;
	std::cout << "\n";

	foodInventory.erase(foodInventory.begin() + input);

	std::cout << "\n";

	std::cout << "Item number " << input << " deleted...";
}

void Inventory::deleteElectronicItem()
{
	std::cout << "Type the number of the item you wish to delete ";
	int input{};
	std::cin >> input;
	std::cout << "\n";

	electronicInventory.erase(electronicInventory.begin() + input);

	std::cout << "\n";

	std::cout << "Item number " << input << " deleted...";
}

void Inventory::listAll(Inventory T)
{
	T.listGenericItems();
	T.listFoodItems();
	T.listElectronicItems();
}