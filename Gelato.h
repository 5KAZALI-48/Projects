#ifndef _GELATO_H_
#define _GELATO_H_

class Gelato : public NitroSnackMenuItem
{
	public:
		Gelato(string i_name, int i_quantity, double i_price, MenuItem i_type):NitroSnackMenuItem(i_name, i_quantity, i_price, i_type){}
		void displayTransectionInfo();
};
#endif //_GELATO_H_