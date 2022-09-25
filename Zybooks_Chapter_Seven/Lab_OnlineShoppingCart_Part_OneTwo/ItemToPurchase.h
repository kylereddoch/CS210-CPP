/*
 * Programmers typically put all code for a class into two files
 * The header file contains the class definition, including data
 * members and function declarations; function definitions are
 * written in the class.cpp file; any file that uses this class
 * must include the header file in which it is defined
 */

#include <string>				// Includes the class definition for built-in
								// string class

using namespace std;

#ifndef ITEMTOPURCHASE_H_
#define ITEMTOPURCHASE_H_

class ItemToPurchase {
	public:
		ItemToPurchase();					// Default Constructor
		// Parameterized constructor
		ItemToPurchase(string itemName, string itemDescription, int itemPrice = 0, int itemQuantity = 0);
		void SetName(string itemName);
		void SetPrice(int itemPrice);
		void SetQuantity(int itemQuantity);
		void SetDescription(string itemDescription);
		string GetName();
		int GetPrice();
		int GetQuantity();
		string GetDescription();
		void PrintItemCost();
		void PrintItemDescription();
	private:
		string itemName;
		int itemPrice;						// Double is better for prices, but int
											// seems sufficient for this lab
		int itemQuantity;
		string itemDescription;
};

#endif /* ITEMTOPURCHASE_H_ */
