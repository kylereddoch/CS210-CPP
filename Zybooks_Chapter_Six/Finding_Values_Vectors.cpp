/*
Assign numMatches with the number of elements in userValues that equal matchValue. userValues has NUM_VALS elements. Ex: If userValues is {2, 2, 1, 2} and matchValue is 2 , then numMatches should be 3.

Your code will be tested with the following values:
* matchValue: 2, userValues: {2, 2, 1, 2} (as in the example program above)
* matchValue: 0, userValues: {0, 0, 0, 0}
* matchValue: 50, userValues: {10, 20, 30, 40}
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_VALS = 4;
    int matchValue;
    unsigned int i;
    int numMatches = -99; // Assign numMatches with 0 before your for loop
    vector<int> userValues(NUM_VALS);

    cin >> matchValue;

    for (i = 0; i < userValues.size(); ++i) {
        cin >> userValues.at(i);
    }

    numMatches = 0;

    for (i = 0; i < userValues.size(); ++i) {
        if (userValues.at(i) == matchValue) {
            numMatches = numMatches + 1;
        }
    }

    cout << "matchValue: " << matchValue << ", numMatches: " << numMatches << endl;

    return 0;
}