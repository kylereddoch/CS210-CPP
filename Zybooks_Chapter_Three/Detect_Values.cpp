/*
Write an expression that prints "Special number" if specialNum is 0, -99, or 44.
*/

#include <iostream>
using namespace std;

int main() {
   int specialNum;

   cin >> specialNum;

   if ((specialNum == 0) || (specialNum == -99) || (specialNum == 44)) {
      cout << "Special number" << endl;
   }
   else {
      cout << "Not special number" << endl;
   }

   return 0;
}
