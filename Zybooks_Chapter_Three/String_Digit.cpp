/*
Set hasDigit to true if the 3-character passCode contains a digit.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   bool hasDigit;
   string passCode;

   hasDigit = false;
   cin >> passCode;

   if (isdigit(passCode.at(0)) || isdigit(passCode.at(1)) || isdigit(passCode.at(2))) {
      hasDigit = true;
   }

   if (hasDigit) {
      cout << "Has a digit." << endl;
   }
   else {
      cout << "Has no digit." << endl;
   }

   return 0;
}
