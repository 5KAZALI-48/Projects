#ifndef _DRAGONBREATH_H_
#define _DRAGONBREATH_H_

class DragonBreath : public NitroSnackMenuItem
{
	public:
		DragonBreath(string i_name, int i_quantity, double i_price, MenuItem i_type) :NitroSnackMenuItem(i_name, i_quantity, i_price, i_type){}
		void displayTransectionInfo();
};
#endif //_DRAGONBREATH_H_