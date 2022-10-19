#include <iostream>
#include <cstdlib>
using namespace std;

class IntNode {
public:
    IntNode(int dataInit = 0, IntNode* nextLoc = nullptr);
    void InsertAfter(IntNode* nodeLoc);
    IntNode* GetNext();
    int GetDataVal();
private:
    int dataVal;
    IntNode* nextNodePtr;
};

// Constructor
IntNode::IntNode(int dataInit, IntNode* nextLoc) {
    this->dataVal = dataInit;
    this->nextNodePtr = nextLoc;
}

/* Insert node after this node.
 * Before: this -- next
 * After:  this -- node -- next
 */
void IntNode::InsertAfter(IntNode* nodeLoc) {
    IntNode* tmpNext = nullptr;

    tmpNext = this->nextNodePtr;    // Remember next
    this->nextNodePtr = nodeLoc;    // this -- node -- ?
    nodeLoc->nextNodePtr = tmpNext; // this -- node -- next
}

// Grab location pointed by nextNodePtr
IntNode* IntNode::GetNext() {
    return this->nextNodePtr;
}

int IntNode::GetDataVal() {
    return this->dataVal;
}

int main() {
    IntNode* headObj = nullptr; // Create intNode objects
    IntNode* currObj = nullptr;
    IntNode* lastObj = nullptr;
    int i;
    int negativeCntr;

    negativeCntr = 0;

    headObj = new IntNode(-1);        // Front of nodes list
    lastObj = headObj;

    for (i = 0; i < 10; ++i) {        // Append 10 rand nums
        currObj = new IntNode((rand() % 21) - 10);
        lastObj->InsertAfter(currObj); // Append curr
        lastObj = currObj;             // Curr is the new last item
    }

    currObj = headObj;                // Print the list
    while (currObj != nullptr) {
        cout << currObj->GetDataVal() << ", ";
        currObj = currObj->GetNext();
    }
    cout << endl;

    currObj = headObj;                // Count number of negative numbers
    while (currObj != nullptr) {

        /* Your solution goes here  */
        if (currObj->GetDataVal() < 0) negativeCntr++;

        currObj = currObj->GetNext();
    }
    cout << "Number of negatives: " << negativeCntr << endl;

    return 0;
}