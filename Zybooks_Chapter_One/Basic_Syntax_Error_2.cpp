/*
Each cout statement has a syntax error. Type the first cout statement, and press Run to observe the error message. Fix the error, and run again. Repeat for the second, then third, cout statement.
cout << "Num: " << songnum << endl;
cout << int songNum << endl;
cout << songNum " songs" << endl;
Note: These activities may test code with different test values. This activity will perform two tests: the first with songNum = 5, the second with songNum = 9.
*/

#include <iostream>
using namespace std;

int main() {
   int songNum;

   songNum = 5;

   cout << "Num: " << songNum << endl;
   cout << songNum << endl;
   cout << songNum << " songs" << endl;

   return 0;
}
