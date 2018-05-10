// NitroSnackDailyTransectionRecord.cpp : Records Daily Transection Activities and saves them in an Exel File
#include "Database.h"
#include "NitroSnackMenuItem.h"
#include "Gelato.h"
#include "DragonBreath.h"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <process.h>

#define CLEARSCREEN system ( "cls" )

using namespace std;

//Forward Declerations
void flushStdIn();
void callHelper(char); 
void helper(char);

double calculateItemPrice(int, double);
void newSale(string, int, double, MenuItem);
void displayDatabase();

Database *list = NULL;
int main()
{
	char choice = '\0';

	cout << "\n *** NITROSNACK DAILY TRANSECTION RECORD ***" << endl << endl;

	do
	{
		cout << "\tPlease Select one Option" << endl;
		cout << "\t[1]-New Sale" << endl;
		cout << "\t[2]-Display Sales History" << endl;
		cout << "\t[0]-Exit" << endl;
		cin >> choice;
		flushStdIn();
		callHelper(choice);

	} while (choice != '0');
	list = NULL;
    return 0;
}

void clrscr()
{
	system("@cls||clear");
}

void flushStdIn()
{
	int c;
	do c = getchar(); while (c != '\n' && c != EOF);
}

void callHelper(char choice)
{
	switch (choice)
	{
		case '1':
		case '2': helper(choice);
			break;
		case '0': break;
		default: 
			cout << "\tError: Please Select an Option Below ***" << endl;
	}
}

void helper(char choice)
{
	int	quantity = 0;
	double itemPrice = 0.0;
	string itemName = "";
	MenuItem itemType;
	int itemNumberInput = 2;
	
	if (choice == '1')
	{
		system("cls");
		cout << endl << "\t*****New Sale*****" << endl;
		cout << "\t1. Item Name:";
		getline(cin, itemName);

		cout << "\t2. Quantity:";
		cin >> quantity;

		cout << "\t3. Price:";
		cin >> itemPrice;
		system("cls");
		while (!(itemNumberInput == 0 || itemNumberInput == 1))
		{
			cout << endl << "\tPlease select the Item Type: " << endl;
			cout << "\t0. Dragon Breath " << endl;
			cout << "\t1. Gelato " << endl;
			cin >> itemNumberInput;
			system("cls");
		}

		itemType = (MenuItem)itemNumberInput;
		cout << endl << "\tTotal Amount:" <<"[ " <<calculateItemPrice(quantity, itemPrice) << " ]" << endl;
		newSale(itemName, quantity, itemPrice, itemType);
	}
	else if (choice == '2')
	{
		system("cls");
		displayDatabase();
	}
}

double calculateItemPrice(int quantity, double itemPrice)
{
	return (quantity * itemPrice);
}

void newSale(string i_name, int i_quantity, double i_price, MenuItem i_type)
{
	Database *newDataBaseItem = new Database();
	if (i_type == Dragon)
		newDataBaseItem->MenuItem = new DragonBreath(i_name, i_quantity, i_price, i_type);
	else
		newDataBaseItem->MenuItem = new Gelato(i_name, i_quantity, i_price, i_type);

	newDataBaseItem->next = NULL;

	if (list == NULL)
	{
		list = newDataBaseItem;
		return;
	}
	Database *currentDataMember = list->next;
	Database *previousDataMember = list;

	while (currentDataMember != NULL)
	{
		previousDataMember = currentDataMember;
		currentDataMember = currentDataMember->next;
	}

	previousDataMember->next = newDataBaseItem;
}

void displayDatabase()
{
	Database *transectionList = list;
	if (list == NULL)
		cout << "There is no transection yet!" << endl;

	while (transectionList != NULL)
	{
		transectionList->MenuItem->displayTransectionInfo();
		transectionList = transectionList->next;
	}
}

void saveDailyTransections()
{
	time_t time_object = time(0);   // get time now
	struct tm * now = localtime(&time_object);
	char buffer[80];
	strftime(buffer, 80, "%m-%d-%Y.csv", now);

	ofstream todaysFile;
	todaysFile.open(buffer);
	
	if (todaysFile.is_open())
	{
		cout << "\tDaily Database is Successfully Created " << endl;
	}
	
 }

