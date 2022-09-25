/*
Compute the average kids per family. Note that the integers should be type cast to doubles.
*/

#include <iostream>
using namespace std;

int main() {
   int numKidsA;
   int numKidsB;
   int numKidsC;
   int numFamilies;
   double avgKids;

   cin >> numKidsA;
   cin >> numKidsB;
   cin >> numKidsC;
   cin >> numFamilies;

   avgKids = static_cast<double>(numKidsA + numKidsB + numKidsC) / static_cast<double>(numFamilies);

   cout << avgKids << endl;

   return 0;
}
