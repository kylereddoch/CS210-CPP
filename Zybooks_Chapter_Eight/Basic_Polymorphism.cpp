/*
Write the PrintItem() function for the base class. Sample output for below program:
Last name: Smith
First and last name: Bill Jones
Hint: Use the keyword const to make PrintItem() a virtual function.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BaseItem {
public:
    void SetLastName(string providedName) {
        lastName = providedName;
    };

    // FIXME: Define PrintItem() member function

    /* Your solution goes here  */

    virtual void PrintItem() const {
        cout << "Last name: " << lastName << endl;
    }

protected:
    string lastName;
};

class DerivedItem : public BaseItem {
public:
    void SetFirstName(string providedName) {
        firstName = providedName;
    };

    void PrintItem() const override {
        cout << "First and last name: ";
        cout << firstName << " " << lastName << endl;
    };

private:
    string firstName;
};

int main() {
    BaseItem* baseItemPtr = nullptr;
    DerivedItem* derivedItemPtr = nullptr;
    vector<BaseItem*> itemList;
    unsigned int i;

    baseItemPtr = new BaseItem();
    baseItemPtr->SetLastName("Smith");

    derivedItemPtr = new DerivedItem();
    derivedItemPtr->SetLastName("Jones");
    derivedItemPtr->SetFirstName("Bill");

    itemList.push_back(baseItemPtr);
    itemList.push_back(derivedItemPtr);

    for (i = 0; i < itemList.size(); ++i) {
        itemList.at(i)->PrintItem();
    }

    return 0;
}