/*
A drink costs 2 dollars. A taco costs 4 dollars. Given the number of each, compute total cost and assign totalCost with the result. Ex: 4 drinks and 6 tacos yields totalCost of 32.
*/

#include <iostream>
using namespace std;

int main() {
   int numDrinks;
   int numTacos;
   int totalCost;

   cin >> numDrinks;
   cin >> numTacos;

   totalCost = (numTacos * 4) + (numDrinks * 2);

   cout << "Total cost: " << totalCost << endl;

   return 0;
}
