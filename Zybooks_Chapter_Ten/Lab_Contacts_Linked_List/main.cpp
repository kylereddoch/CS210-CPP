#include <iostream>
#include <iomanip>
#include "ContactNode.h"

using namespace std;

int main() {

    string fullName;
    string phoneNum;
    ContactNode* headContact = 0;
    ContactNode* nextContact1 = 0;
    ContactNode* nextContact2 = 0;
    ContactNode* currContact = 0;

    cout << "Person 1" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", " << phoneNum << endl << endl;

    //First contact node (head of heap)
    headContact = new ContactNode(fullName, phoneNum);
    cin.ignore();

    cout << "Person 2" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", " << phoneNum << endl << endl;

    nextContact1 = new ContactNode(fullName, phoneNum);
    headContact->InsertAfter(nextContact1);
    cin.ignore();

    cout << "Person 3" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", " << phoneNum << endl << endl;

    nextContact2 = new ContactNode(fullName, phoneNum);
    nextContact1->InsertAfter(nextContact2);

    cout << "CONTACT LIST" << endl;
    currContact = headContact;

    while (currContact != 0) {
        currContact->PrintContactNode();
        currContact = currContact->GetNext();
        cout << endl;
    }

    return 0;

}