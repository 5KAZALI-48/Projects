#include "NitroSnackMenuItem.h"
#include "Gelato.h"

#include <iostream>

void Gelato::displayTransectionInfo()
{
	cout << endl << "Item Name: " << getItemName() << endl;
	cout << "Quantity:" << getItemQuantity() << endl;
	cout << "Price:" << getItemPrice() << endl << endl;
}
