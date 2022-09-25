/*
Write a statement that increases numPeople by 5. Ex: If numPeople is initially 10, the output is: There are 15 people.
*/

#include <iostream>
using namespace std;

int main() {
   int numPeople;

   cin >> numPeople;

   numPeople = numPeople + 5;

   cout << "There are " << numPeople << " people." << endl;

   return 0;
}
