/*
 * Programmers typically put all code for a class into two files
 * The header file contains the class definition, including data
 * members and function declarations; function definitions are
 * written in the class.cpp file; any file that uses this class
 * must include the header file in which it is defined
 */

#include <string>				// Includes the class definition for built-in
								// string class
#include <vector>				// Class definition for the vector class

using namespace std;

#include "ItemToPurchase.h"

#ifndef SHOPPINGCART_H_
#define SHOPPINGCART_H_

class ShoppingCart {
	public:
		ShoppingCart();									// Default constructor
		// Parameterized constructor which takes the customer name and date as parameters
		ShoppingCart(string customerName, string currentDate);
		string GetCustomerName();
		string GetDate();
		void AddItem(ItemToPurchase itemToPurchase);
		void RemoveItem(string itemName);
		void ModifyItem(ItemToPurchase itemToPurchase);
		int GetNumItemsInCart();
		int GetCostOfCart();
		void PrintTotal();
		void PrintDescriptions();
	private:
		string customerName;
		string currentDate;
		vector<ItemToPurchase> cartItems;				// Vector of ItemToPurchase items
};



#endif /* SHOPPINGCART_H_ */
