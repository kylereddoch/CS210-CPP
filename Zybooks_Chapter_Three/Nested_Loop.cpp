/*
Print numbers 0, 1, 2, ..., userNum as shown, with each number indented by that number of spaces. For each printed line, print the leading spaces, then the number, and then a newline. Hint: Use i and j as loop variables (initialize i and j explicitly). Note: Avoid any other spaces like spaces after the printed number. Ex: userNum = 3 prints:
0
 1
  2
   3
*/

#include <iostream>
using namespace std;

int main() {
   int userNum;
   int i;
   int j;

   cin >> userNum;

   for (i = 0; i <= userNum; i++) {
      for (j = 0; j < i; j++) {
         cout << " ";
      }
      cout << i << endl;
   }

   return 0;
}
