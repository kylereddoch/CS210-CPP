/*
Write an expression that executes the loop while the user enters a number greater than or equal to 0.


Note: These activities may test code with different test values. This activity will perform three tests, with user input of 9, 5, 2, -1, then with user input of 0, -17, then with user input of -1.

Also note: If the submitted code has an infinite loop, the system will stop running the code after a few seconds, and report "Test aborted."
*/

#include <iostream>
using namespace std;

int main() {
   int userNum;

   cin >> userNum;

   while (userNum >= 0) {
      cout << "Body" << endl;
      cin >> userNum;
   }
   cout << "Done." << endl;

   return 0;
}
