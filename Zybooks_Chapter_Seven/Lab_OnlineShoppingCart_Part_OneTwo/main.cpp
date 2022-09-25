#include <iostream>
#include <vector>
#include <stdexcept>	// Library needed to generate runtim_error objects
						// for exception handling
#include <string>		// Includes the class definition for built-in
						// string class
using namespace std;

#include "ItemToPurchase.h"
#include "ShoppingCart.h"

// Implement the PrintMenu() function. PrintMenu() has a ShoppingCart parameter
// and outputs a menu of options to manipulate the shopping cart.
// Each option is represented by a single character

void PrintMenu(ShoppingCart shoppingCart) {
	string displayMenu = 	"MENU\na - Add item to cart\nd - Remove item from cart\n"
							"c - Change item quantity\ni - Output items' descriptions\n"
							"o - Output shopping cart\nq - Quit";
	char userInput;
	bool validEntry;		// flag to drive exception handling
	// Variables to store individual item fields
	string itemName;
	string itemDescription;
	int itemPrice;
	int itemQuantity;

	while (userInput != 'q') {
		cout << displayMenu << endl << endl;
		do {
			validEntry = true;
			try {
				cout << "Choose an option:" << endl;
				cin >> userInput;
				cin.ignore();	// allow for carriage return
				userInput = tolower(userInput);
				if ((userInput != 'a') && (userInput != 'd') && (userInput != 'c')
						&& (userInput != 'i') && (userInput != 'o') && (userInput != 'q')) {
					throw runtime_error("Invalid selection.");
				}

				if (userInput == 'a') {
					cout << "ADD ITEM TO CART" << endl;
					cout << "Enter the item name:" << endl;
					// getline() captures all remaining text on the current input line
					// up to the next newline character, allowing for entry of whitespace
					getline(cin, itemName);
					cout << "Enter the item description:" << endl;
					getline(cin, itemDescription);
					cout << "Enter the item price:" << endl;
					cin >> itemPrice;
					cout << "Enter the item quantity:" << endl;
					cin >> itemQuantity;
					cout << endl;
					ItemToPurchase itemToPurchase(itemName, itemDescription, itemPrice, itemQuantity);
					shoppingCart.AddItem(itemToPurchase);
				}
				else if (userInput == 'd') {
					cout << "REMOVE ITEM FROM CART" << endl;
					cout << "Enter name of item to remove:" << endl;
					getline(cin, itemName);
					shoppingCart.RemoveItem(itemName);
				}
				else if (userInput == 'c') {
					// Implement Change item quantity menu option.
					// Make new ItemToPurchase object and use ItemToPurchase
					// modifiers before using ModifyItem() function
					// Capture user input, strings can be empty and quantities
					// default to 0
					cout << "CHANGE ITEM QUANTITY" << endl;
					cout << "Enter the item name:" << endl;
					getline(cin, itemName);
					cout << "Enter the new quantity:" << endl;
					cin >> itemQuantity;
					cout << endl;
					itemDescription = "";
					itemPrice = 0;
					ItemToPurchase itemToPurchase(itemName, itemDescription, itemPrice, itemQuantity);
					shoppingCart.ModifyItem(itemToPurchase);
				}
				else if (userInput == 'i') {
					cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
					shoppingCart.PrintDescriptions();
				}
				else if (userInput == 'o') {
					cout << "OUTPUT SHOPPING CART" << endl;
					shoppingCart.PrintTotal();
				}
				else {
					continue;
				}
			}
			catch (runtime_error& excpt) {
				// cout << excpt.what() << endl;
				validEntry = false;
			}
		} while(!validEntry);
	}
	return;
}

int main() {
	string customerName;
	string dateToday;
	cout << "Enter customer's name:" << endl;
	getline(cin, customerName);
	cout << "Enter today's date:" << endl;
	getline(cin, dateToday);
	cout << endl;
	cout << "Customer name: " << customerName << endl;
	cout << "Today's date: " << dateToday << endl << endl;
	ShoppingCart shoppingCart(customerName, dateToday);
	PrintMenu(shoppingCart);
	return 0;
}
