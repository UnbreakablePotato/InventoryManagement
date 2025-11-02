#pragma once
#include <string>

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