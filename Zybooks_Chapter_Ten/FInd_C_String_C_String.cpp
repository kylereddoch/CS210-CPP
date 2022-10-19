#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char movieTitle[100];
    char* movieResult = nullptr;

    cin.getline(movieTitle, 100);

    /* Your solution goes here  */
    movieResult = strstr(movieTitle, "The");

    cout << "Movie title contains The? ";
    if (movieResult != nullptr) {
        cout << "Yes." << endl;
    }
    else {
        cout << "No." << endl;
    }

    return 0;
}