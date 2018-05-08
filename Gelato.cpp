#include "NitroSnackMenuItem.h"
#include "DragonBreath.h"
#include <iostream>

using namespace std;
void DragonBreath::displayTransectionInfo()
{
	cout << endl << "\tItem Name: " << getItemName() << endl;
	cout << "\tUnit Price:" << getItemPrice() << endl;
	cout << "\t" << getItemQuantity() << " cups perchesed " << endl;
	cout << "\tTotal Price: " << getItemPrice() *  getItemQuantity() << endl << endl;
	
}
