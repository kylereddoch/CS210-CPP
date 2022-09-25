/*
Write a statement that assigns numCoins with numNickels + numDimes. Ex: 5 nickels and 6 dimes results in 11 coins.

Note: These activities may test code with different test values. This activity will perform two tests: the first with nickels = 5 and dimes = 6, the second with nickels = 9 and dimes = 0.
*/

#include <iostream>
using namespace std;

int main() {
   int numCoins;
   int numNickels;
   int numDimes;

   numNickels = 5;
   numDimes = 6;

   numCoins = numNickels + numDimes;

   cout << "There are  " << numCoins << " coins" << endl;

   return 0;
}
