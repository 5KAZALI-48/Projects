#include "NitroSnackMenuItem.h"

NitroSnackMenuItem::NitroSnackMenuItem(string i_name, int i_quantity, double i_price, MenuItem i_type)
{
	itemName = i_name;
	itemQuantity = i_quantity;
	itemPrice = i_price;
	itemType = i_type;
}

string NitroSnackMenuItem::getItemName()
{
	return itemName;
}
int NitroSnackMenuItem::getItemQuantity()
{
	return itemQuantity;
}
double NitroSnackMenuItem::getItemPrice()
{
	return itemPrice;
}
MenuItem NitroSnackMenuItem::getItemType()
{
	return itemType;
}