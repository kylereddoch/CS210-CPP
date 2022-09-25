/*
Write an expression that continues to bid until the user enters 'n'.
*/

#include <iostream>
using namespace std;

int main() {
   char keepGoing;
   int nextBid;

   nextBid = 0;
   keepGoing = 'y';

   while (keepGoing != 'n') {
      nextBid = nextBid + 3;
      cout << "I'll bid $" << nextBid << "!" << endl;
      cout << "Continue bidding? (y/n) ";
      cin >> keepGoing;
   }
   cout << endl;

   return 0;
}
