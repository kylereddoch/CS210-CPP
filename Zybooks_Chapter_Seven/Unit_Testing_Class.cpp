/*
Write a unit test for addInventory(), which has an error. Call redSweater.addInventory() with parameter sweaterShipment. Print the shown error if the subsequent quantity is incorrect. Sample output for failed unit test given initial quantity is 10 and sweaterShipment is 50:

Beginning tests.
   UNIT TEST FAILED: addInventory()
Tests complete.
*/

#include <iostream>
using namespace std;

class InventoryTag {
public:
    InventoryTag();
    int getQuantityRemaining() const;
    void addInventory(int numItems);

private:
    int quantityRemaining;
};

InventoryTag::InventoryTag() {
    quantityRemaining = 0;
}

int InventoryTag::getQuantityRemaining() const {
    return quantityRemaining;
}

void InventoryTag::addInventory(int numItems) {
    if (numItems > 10) {
        quantityRemaining = quantityRemaining + numItems;
    }
}

int main() {
    InventoryTag redSweater;
    int sweaterShipment;
    int sweaterInventoryBefore;

    sweaterInventoryBefore = redSweater.getQuantityRemaining();
    cin >> sweaterShipment;

    cout << "Beginning tests." << endl;

    // FIXME add unit test for addInventory

    /* Your solution goes here  */

    redSweater.addInventory(sweaterShipment);
    if (redSweater.getQuantityRemaining() != sweaterShipment) {
        cout << "   UNIT TEST FAILED: addInventory()\n";
    }

    cout << "Tests complete." << endl;

    return 0;
}