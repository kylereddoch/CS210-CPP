/*
Using a conditional expression, write a statement that increments numUsers if updateDirection is 1, otherwise decrements numUsers. Ex: if numUsers is 8 and updateDirection is 1, numUsers becomes 9; if updateDirection is 0, numUsers becomes 7.

Hint: Start with "numUsers = ...".
*/

#include <iostream>
using namespace std;

int main() {
   int numUsers;
   int updateDirection;

   cin >> numUsers;
   cin >> updateDirection;

   numUsers = (updateDirection ==1)?(++numUsers):(--numUsers);

   cout << "New value is: " << numUsers << endl;

   return 0;
}
