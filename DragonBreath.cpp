#include "NitroSnackMenuItem.h"
#include "DragonBreath.h"
#include <iostream>

using namespace std;
void DragonBreath::displayTransectionInfo()
{
	cout << endl << "Item Name: " << getItemName() << endl;
	cout << "Quantity:" << getItemQuantity() << endl;
	cout << "Price:" << getItemPrice() << endl << endl;
}