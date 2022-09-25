/*
Assign secretID with firstName, a space, and lastName. Ex: If firstName is Barry and lastName is Allen, then output is:
Barry Allen
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string secretID;
   string firstName;
   string lastName;

   cin >> firstName;
   cin >> lastName;

   char spaceChar = ' ';

   firstName.push_back(spaceChar);
   secretID = firstName + lastName;

   cout << secretID << endl;
   return 0;
}
