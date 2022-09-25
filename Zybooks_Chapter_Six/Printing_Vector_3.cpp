/*
Write three statements to print the first three elements of vector runTimes. Follow each with a newline. Ex: If runTimes = {800, 775, 790, 805, 808}, print:
800
775
790
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_VALS = 5;
    vector<int> runTimes(NUM_VALS);
    unsigned int i;

    // Populate vector
    for (i = 0; i < runTimes.size(); ++i) {
        cin >> runTimes.at(i);
    }

    for (i = 0; i < 3; ++i) {
        cout << runTimes.at(i) << endl;
    }

    return 0;
}