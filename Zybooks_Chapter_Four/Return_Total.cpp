/*
Write a function NumberOfPennies() that returns the total number of pennies given a number of dollars and (optionally) a number of pennies. Ex: 5 dollars and 6 pennies returns 506.
*/

#include <iostream>
using namespace std;

int NumberOfPennies(int UsrsDollars, int UserPennies) {
   int totalPennies = 0;
   int penniesInDollar = 100;

   totalPennies = (UsrsDollars * penniesInDollar) + UserPennies;

   return totalPennies;
}

int main() {
   cout << NumberOfPennies(5, 6) << endl; // Should print 506
   cout << NumberOfPennies(4) << endl;    // Should print 400
   return 0;
}
