#include <iostream>
#include <string>
#include <vector>
#include "Items.h"

int main()
{
    Item fruit1("Banana", 5, "A0000");

    std::cout << "The items name is " << fruit1.getItemName() << " ,the items price is " << fruit1.getItemPrice() << " and the items code is " << fruit1.getItemCode() << "\n";

    fruit1.setItemName("Apple");
    fruit1.setItemPrice(8);

    std::cout << "The items name is " << fruit1.getItemName() << " ,the items price is " << fruit1.getItemPrice() << " and the items code is " << fruit1.getItemCode() << "\n";
    
}
