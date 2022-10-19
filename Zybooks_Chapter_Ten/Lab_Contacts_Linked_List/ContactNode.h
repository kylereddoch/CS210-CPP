#ifndef CONTACTS_H
#define CONTACTS_H

#include <string>
using namespace std;

class ContactNode { // Class definition
public:
    ContactNode();
    ContactNode(string initName, string initPhoneNum, ContactNode* nextLoc = 0);
    void InsertAfter(ContactNode* nodePtr);
    string GetName() const;
    string GetPhoneNumber() const;
    ContactNode* GetNext();
    void PrintContactNode();

private:
    string contactName;
    string contactPhoneNum;
    ContactNode* nextNodePtr;
};

#endif