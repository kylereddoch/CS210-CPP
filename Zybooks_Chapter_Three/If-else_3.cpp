/*
Write an if-else statement with multiple branches. If givenYear is 2101 or greater, print "Distant future" (without quotes). Else, if givenYear is 2001 or greater (2001-2100), print "21st century". Else, if givenYear is 1901 or greater (1901-2000), print "20th century". Else (1900 or earlier), print "Long ago". End with a newline. Remember that outputting 'endl' outputs a newline.
*/

#include <iostream>
using namespace std;

int main() {
   int givenYear;

   cin >> givenYear;

   if (givenYear >= 2101) {
      cout << "Distant future" << endl;
   }
   else if (givenYear >= 2001) {
      cout << "21st century" << endl;
   }
   else if (givenYear >= 1901) {
      cout << "20th century" << endl;
   }
   else {
      cout << "Long ago" << endl;
   }

   return 0;
}
