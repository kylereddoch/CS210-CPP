/*
Assign to maxSum the max of (numA, numB) PLUS the max of (numY, numZ). Use just one statement. Hint: Call FindMax() twice in an expression.
*/

#include <iostream>
using namespace std;

double FindMax(double num1, double num2) {
   double maxVal;

   // Note: if-else statements need not be understood to complete this activity
   if (num1 > num2) { // if num1 is greater than num2,
      maxVal = num1;  // then num1 is the maxVal.
   }
   else {             // Otherwise,
      maxVal = num2;  // num2 is the maxVal.
   }

   return maxVal;
}

int main() {
   double numA;
   double numB;
   double numY;
   double numZ;
   double maxSum;

   cin >> numA;
   cin >> numB;
   cin >> numY;
   cin >> numZ;

   maxSum = FindMax(numA, numB) + FindMax(numY, numZ);

   cout << "maxSum is: " << maxSum << endl;

   return 0;
}
