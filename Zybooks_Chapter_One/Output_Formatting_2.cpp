/*
Write a single statement that prints outsideTemperature with 2 digits in the fraction (after the decimal point). End with a newline. Sample output with input 103.45632:
103.46
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double outsideTemperature;

   cin >> outsideTemperature;

   cout << fixed << setprecision(2) << outsideTemperature << endl
   
   return 0;
}
