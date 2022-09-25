#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {

	/* Type your code here */

	ItemToPurchase ItemOne;
	ItemToPurchase ItemTwo;

	// Variables to store individual item fields
	string name;
	int price;
	int quantity;

	// Asks user for Name, Price, and Quantity of first item.
	// Sets inputs to appropriate variables.
	cout << "Item 1" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, name);
	ItemOne.SetName(name);
	cout << "Enter the item price:" << endl;
	cin >> price;
	ItemOne.SetPrice(price);
	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	ItemOne.SetQuantity(quantity);

	// Asks user for Name, Price, and Quantity of second item.
	// Sets inputs to appropriate variables.
	cout << "\nItem 2" << endl;
	cout << "Enter the item name:" << endl;
	cin.ignore();
	getline(cin, name);
	ItemTwo.SetName(name);
	cout << "Enter the item price:" << endl;
	cin >> price;
	ItemTwo.SetPrice(price);
	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	ItemTwo.SetQuantity(quantity);

	// Outputs both items and the total cost of each.
	cout << "\nTOTAL COST" << endl;
	cout << ItemOne.GetName() << " " << ItemOne.GetQuantity() << " @ $" << ItemOne.GetPrice() << " = $" << ItemOne.GetQuantity() * ItemOne.GetPrice() << endl;
	cout << ItemTwo.GetName() << " " << ItemTwo.GetQuantity() << " @ $" << ItemTwo.GetPrice() << " = $" << ItemTwo.GetQuantity() * ItemTwo.GetPrice() << "\n" << endl;
	cout << "Total: $" << (ItemOne.GetQuantity() * ItemOne.GetPrice()) + (ItemTwo.GetQuantity() * ItemTwo.GetPrice()) << endl;

	return 0;
}