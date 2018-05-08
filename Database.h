#ifndef _DATABASE_H_
#define _DATABASE_H_

#include "NitroSnackMenuItem.h"

class Database
{
	public:
		NitroSnackMenuItem * MenuItem;
		Database *next;
		Database();

};
#endif //_DATABASE_H_

