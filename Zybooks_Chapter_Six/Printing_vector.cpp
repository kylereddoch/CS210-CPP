/*
Write a for loop to print all NUM_VALS elements of vector courseGrades, following each with a space (including the last). Print forwards, then backwards. End with newline. Ex: If courseGrades = {7, 9, 11, 10}, print:
7 9 11 10
10 11 9 7

Hint: Use two for loops. Second loop starts with i = courseGrades.size() - 1 (Notes)


Note: These activities may test code with different test values. This activity will perform two tests, both with a 4-element vector (vector<int> courseGrades(4))

Also note: If the submitted code has errors, the test may generate strange results. Or the test may crash and report "Program end never reached", in which case the system doesn't print the test case that caused the reported message.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> courseGrades(NUM_VALS);
   int i;

   for (i = 0; i < courseGrades.size(); ++i) {
      cin >> courseGrades.at(i);
   }

   for (i = 0; i < NUM_VALS; i++) {
      cout << courseGrades.at(i) << " ";
   }

   cout << endl;

   for (i = NUM_VALS -1; i >= 0; i--) {
      cout << courseGrades.at(i) << " ";
   }

   cout << endl;

   return 0;
}
