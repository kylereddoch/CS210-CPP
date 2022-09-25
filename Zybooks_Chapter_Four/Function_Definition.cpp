/*
Define a function PyramidVolume with double parameters baseLength, baseWidth, and pyramidHeight, that returns as a double the volume of a pyramid with a rectangular base. Relevant geometry equations:
Volume = base area x height x 1/3
Base area = base length x base width.
(Watch out for integer division).
*/

#include <iostream>
using namespace std;

double PyramidVolume(double baseLength, double baseWidth, double pyramidHeight) {
   double baseArea = baseLength * baseWidth;
   double volume = ((baseArea * pyramidHeight) * 1/3);
   return volume;
}

int main() {
   double userLength;
   double userWidth;
   double userHeight;

   cin >> userLength;
   cin >> userWidth;
   cin >> userHeight;

   cout << "Volume: " << PyramidVolume(userLength, userWidth, userHeight) << endl;

   return 0;
}
