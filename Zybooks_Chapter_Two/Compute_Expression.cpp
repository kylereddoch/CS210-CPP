/*
Write a statement that assigns finalResult with the sum of num1 and num2, divided by 3. Ex: If num1 is 4 and num2 is 5, finalResult is 3.
*/

#include <iostream>
using namespace std;

int main() {
   int num1;
   int num2;
   int finalResult;

   cin >> num1;
   cin >> num2;

   finalResult = (num1 + num2) / 3;

   cout << "Final result: " << finalResult << endl;

   return 0;
}
