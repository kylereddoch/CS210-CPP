/*
Add two more statements to main() to test inputs 3 and -1. Use print statements similar to the existing one (don't use assert).
*/

#include <iostream>
using namespace std;

// Function returns origNum cubed
int CubeNum(int origNum) {
   return origNum * origNum * origNum;
}

int main() {

   cout << "Testing started" << endl;

   cout << "2, expecting 8, got: " << CubeNum(2) << endl;

   cout << "3, expecting 27, got: " << CubeNum(3) << endl;

   cout << "-1, expecting -1, got: " << CubeNum(-1) << endl;

   cout << "Testing completed" << endl;

   return 0;
}
