#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Items.h"
#include "TUI.h"

int main()
{
    introTUI();
    options();
    
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