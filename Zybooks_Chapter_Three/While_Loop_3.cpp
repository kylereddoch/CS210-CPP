/*
Given positive integer numInsects, write a while loop that prints that number doubled without reaching 200. Follow each number with a space. After the loop, print a newline. Ex: If numInsects = 16, print:
16 32 64 128
*/

#include <iostream>
using namespace std;

int main() {
   int numInsects;

   cin >> numInsects; // Must be >= 1

   while (numInsects < 200) {
      cout << numInsects << " ";
      numInsects = numInsects * 2;
   }
   cout << endl;

   return 0;
}
