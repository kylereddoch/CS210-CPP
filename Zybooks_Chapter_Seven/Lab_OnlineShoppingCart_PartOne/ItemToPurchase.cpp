#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */

ItemToPurchase::ItemToPurchase() { // Default constructor

	// Initializes variables
	itemName = "none";
	itemPrice = 0;
	itemQuantity = 0;
}

void ItemToPurchase::SetName(string name) { // Sets name of item
	itemName = name;
}

void ItemToPurchase::SetPrice(int price) { // Sets price of item
	itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quantity) { // Sets quantity of item
	itemQuantity = quantity;
}

string ItemToPurchase::GetName() const { // Get name of item
	return itemName;
}

int ItemToPurchase::GetPrice() const { // Get price of item
	return itemPrice;
}

int ItemToPurchase::GetQuantity() const { // Gets quantity of item
	return itemQuantity;
}