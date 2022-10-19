#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char personName[100];
    char searchChar;
    char* searchResult = nullptr;

    cin.getline(personName, 100);
    cin >> searchChar;

    /* Your solution goes here  */
    searchResult = strchr(personName, searchChar);

    if (searchResult != nullptr) {
        cout << "Character found." << endl;
    }
    else {
        cout << "Character not found." << endl;
    }

    return 0;
}