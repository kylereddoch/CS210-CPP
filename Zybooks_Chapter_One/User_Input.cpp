/*
Write two cin statements to get input values into birthMonth and birthYear. Then write a statement to output the month, a dash, and the year. End with newline. Remember that outputting 'endl' outputs a newline.

The program will be tested with inputs 1 2000 and then with inputs 5 1950. Ex: If the input is 1 2000, the output is:
1-2000

Note: The input values come from user input, so be sure to use cin statements, as in cin >> birthMonth, to get those input values (and don't assign values directly, as in birthMonth = 1).
*/

#include <iostream>
using namespace std;

int main() {
   int birthMonth;
   int birthYear;

   cin >> birthMonth;
   cin >> birthYear;

   cout << birthMonth << "-" << birthYear << endl;

   return 0;
}
