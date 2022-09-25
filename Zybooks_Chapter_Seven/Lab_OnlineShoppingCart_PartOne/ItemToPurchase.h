#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase {

public: // public class members
	ItemToPurchase(); // default constructor
	void SetName(string item);
	void SetPrice(int price);
	void SetQuantity(int quantity);
	string GetName() const;
	int GetPrice() const;
	int GetQuantity() const;
	int Main(string item, int price, int quantity);

private: // private class members
	string itemName;
	int itemPrice;
	int itemQuantity;
};

#endif