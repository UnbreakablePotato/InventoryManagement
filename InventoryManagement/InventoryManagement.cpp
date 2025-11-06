#include <iostream>
#include <string>
#include <vector>
//#include <map>
//#include "Items.h"
#include "TUI.h"
#include "Inventory.h"

int main()
{
    Inventory test;
    introTUI();
    options();

    int input{};

    std::cin >> input;

    while (input != 4) {
        if (input == 1) {
            test.listAll(test);
        }
        else if (input == 2) {
            addItemType();
            int inputSecondMode{};
            std::cin >> inputSecondMode;
            if (inputSecondMode == 1) {
                test.pushGenericItem();
            }
            else if (inputSecondMode == 2) {
                test.pushFoodItem();
            }
            else if (inputSecondMode == 3) {
                test.pushElectronicItem();
            }
            else {
                std::cout << "You entered input not defined in our logic. Try again...\n";
            }
        }
        else if (input == 3) {
            //logic to delete items
            deleteItemType();
            int inputDelete{};
            std::cin >> input;
            if (inputDelete == 1) {
                test.listGenericItems();
                test.deleteGenericItem();
            }
            else if (inputDelete == 2) {
                test.listFoodItems();
                test.deleteFoodItem();
            }
            else if (inputDelete == 3) {
                test.listElectronicItems();
                test.deleteElectronicItem();
            }
            else {
                test.listAll(test);
            }

        }
        std::cout << std::endl;
        options();
        std::cin >> input;
    }
    
}

/*Item fruit1("Banana", 5, "A0000");

   std::cout << "The items name is " << fruit1.getItemName() << ", the items price is " << fruit1.getItemPrice() << " and the items code is " << fruit1.getItemCode() << "\n";

   fruit1.setItemName("Apple");
   fruit1.setItemPrice(8);

   std::cout << "The items name is " << fruit1.getItemName() << ", the items price is " << fruit1.getItemPrice() << " and the items code is " << fruit1.getItemCode() << "\n";

   foodItem steak("Steak", 85, "A0001", "09/11/2025", false);

   std::cout << "The items name is " << steak.getItemName() << ", the items price is " << steak.getItemPrice() << ", the items code is " << steak.getItemCode() << ", the expiration date of the " << steak.getItemName() << " is " <<
       steak.getExpirationDate() << "\n";

   steak.setExpirationDate("10/11/2025");
   steak.setVegitarianStatus(true);

   std::cout << "Item name | " << steak.getItemName() << " Item price | " << steak.getItemPrice() << "Item code | " << steak.getItemCode() << " Expiration date | " <<
       steak.getExpirationDate() << "\n";*/