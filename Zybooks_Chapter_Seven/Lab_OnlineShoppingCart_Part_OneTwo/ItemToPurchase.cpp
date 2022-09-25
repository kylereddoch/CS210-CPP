/*
 * Any file that uses this class, including the member function
 * definition file, must include the header file in which
 * the class is defined
 */

#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/*
 * In order to compile correctly, the scope resolution operator (::)
 * must be used to tie the function definition to it's original
 * declaration in the header file
 */

/*
 * The 'this' implicit parameter is used to reference the class data
 * members where applicable; The compiler converts object function calls
 * via the dot operator into a function call where the object is implicitly
 * passed as one of the function arguments.  The object is an implicit parameter
 * of the member function and is accessed via 'this->'
 */

// Default Constructor
ItemToPurchase::ItemToPurchase() {
	this->itemName = "none";
	this->itemPrice = 0;
	this->itemQuantity = 0;
	this->itemDescription = "none";
	return;
}

// Overloaded Parameterized Constructor
// Default parameters should only be defined in the function declaration
// The compiler will throw errors if defaults are defined in the function definition
// https://stackoverflow.com/questions/2545720/error-default-argument-given-for-parameter-1
ItemToPurchase::ItemToPurchase(string itemName, string itemDescription, int itemPrice /* default 0 */, int itemQuantity /* default 0 */) {
	this->itemName = itemName;
	this->itemDescription = itemDescription;
	this->itemPrice = itemPrice;
	this->itemQuantity = itemQuantity;
	return;
}

// Setters
void ItemToPurchase::SetName(string itemName) {
	this->itemName = itemName;
	return;											// clear the stack frame
}

void ItemToPurchase::SetPrice(int itemPrice) {
	this->itemPrice = itemPrice;
	return;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
	this->itemQuantity = itemQuantity;
	return;
}

void ItemToPurchase::SetDescription(string itemDescription) {
	this->itemDescription = itemDescription;
	return;
}

// Getters
string ItemToPurchase::GetName() {
	return this->itemName;
}

int ItemToPurchase::GetPrice() {
	return this->itemPrice;
}

int ItemToPurchase::GetQuantity() {
	return this->itemQuantity;
}

string ItemToPurchase::GetDescription() {
	return this->itemDescription;
}

// PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
void ItemToPurchase::PrintItemCost() {
	cout << GetName() << " " << GetQuantity() <<
	" @ $" << GetPrice() << " = $" <<
	(GetPrice() * GetQuantity()) << endl;
}

// PrintItemDescription() - Outputs the item name and description
void ItemToPurchase::PrintItemDescription() {
	cout << GetName() << ": " << GetDescription() << endl;
}
