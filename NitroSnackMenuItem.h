#ifndef _NITROSNACKMENUITEM_H_
#define _NITROSNACKMENUITEM_H_

#include <string>

using namespace std;

enum MenuItem {DragonBreath = 0, Gelato};

class NitroSnackMenuItem
{
	//Private Local Variables
	private:
		string itemName;
		int itemQuantity;
		double itemPrice;
		MenuItem itemType;
	
	public:
		NitroSnackMenuItem(string i_name, int i_quantity, double i_price, MenuItem i_type);		//Parameterized Constructor

		//Accessor Methods
		string getItemName();
		int getItemQuantity();
		double getItemPrice();
		MenuItem getItemType();

		virtual void displayTransectionInfo() {}


};
#endif // _NITROSNACKMENUITEM_H_

