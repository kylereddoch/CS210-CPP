using namespace std;
#include <iostream>
#include <string>
#ifndef _CONTACT
#include "ContactNode.h"
#endif

ContactNode::ContactNode(string initName, string initPhoneNum, ContactNode* nextLoc) {
    contactName = initName;
    contactPhoneNum = initPhoneNum;
    this->nextNodePtr = nextLoc;
    return;
}

void ContactNode::InsertAfter(ContactNode* nodePtr) {
    nextNodePtr = nodePtr; // Set next to the target.
    nodePtr->nextNodePtr == nodePtr; // Set next for target to itself.
}

string ContactNode::GetName() const {
    return contactName;  //Getter
}

string ContactNode::GetPhoneNumber() const {
    return contactPhoneNum; //Getter
}

ContactNode* ContactNode::GetNext() {
    return this->nextNodePtr; //Get pointer to next node
}

void ContactNode::PrintContactNode() {
    cout << "Name: " << this->contactName << endl << "Phone number: " << this->contactPhoneNum << endl;
}