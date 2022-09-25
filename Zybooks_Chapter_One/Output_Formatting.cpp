/*
Write a single statement that prints outsideTemperature with 4 digits. End with newline. Sample output with input 103.45632:
103.5
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double outsideTemperature;

   cin >> outsideTemperature;

   cout << setprecision(4) << outsideTemperature << endl;

   return 0;
}
