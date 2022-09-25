/*
Write a while loop that prints userNum divided by 4 (integer division) until reaching 2 or less. Follow each number by a space. Example output for userNum = 160:
40 10 2

Note: These activities may test code with different test values. This activity will perform four tests, with userNum = 160, then with userNum = 8, then with userNum = 0, then with userNum = -1.

Also note: If the submitted code has an infinite loop, the system will stop running the code after a few seconds, and report "Program end never reached." The system doesn't print the test case that caused the reported message.
*/

#include <iostream>
using namespace std;

int main() {
   int userNum;

   cin >> userNum;

   while (userNum > 2) {
     userNum = userNum / 4;
     cout << userNum << " ";

   }

   cout << endl;

   return 0;
}
