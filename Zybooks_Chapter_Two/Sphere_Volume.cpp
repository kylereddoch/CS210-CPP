/*
Given sphereRadius, compute the volume of a sphere and assign sphereVolume with the result. Use (4.0 / 3.0) to perform floating-point division, instead of (4 / 3) which performs integer division.

Volume of sphere = (4.0 / 3.0) π r3 (Hint: r3 can be computed using *)
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
   double sphereVolume;
   double sphereRadius;

   cin >> sphereRadius;

   sphereVolume = (4.0 / 3.0) * M_PI * (sphereRadius * sphereRadius * sphereRadius);

   cout << fixed << setprecision(2) << sphereVolume << endl;

   return 0;
}
