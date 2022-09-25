/*
Output all combinations of character variables a, b, and c, in the order shown below. If a = 'x', b = 'y', and c = 'z', then the output is:
xyz xzy yxz yzx zxy zyx
Your code will be tested in three different programs, with a, b, c assigned with 'x', 'y', 'z', then with '#', '$', '%', then with '1', '2', '3'.
*/

#include <iostream>
using namespace std;

int main() {
   char a;
   char b;
   char c;

   cin >> a;
   cin >> b;
   cin >> c;

   cout << a << b << c << " ";
   cout << a << c << b << " ";
   cout << b << a << c << " ";
   cout << b << c << a << " ";
   cout << c << a << b << " ";
   cout << c << b << a;

   cout << endl;

   return 0;
}
