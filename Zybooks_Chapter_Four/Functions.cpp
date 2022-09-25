/*
Write a function so that the main() code below can be replaced by the simpler code that calls function MphAndMinutesToMiles(). Original main():

int main() {
   double milesPerHour;
   double minutesTraveled;
   double hoursTraveled;
   double milesTraveled;

   cin >> milesPerHour;
   cin >> minutesTraveled;

   hoursTraveled = minutesTraveled / 60.0;
   milesTraveled = hoursTraveled * milesPerHour;

   cout << "Miles: " << milesTraveled << endl;

   return 0;
}
*/

#include <iostream>
using namespace std;

double MphAndMinutesToMiles(double milesPerHour, double minutesTraveled) {
   double hourstraveled;
   double milesTraveled;

   hourstraveled = minutesTraveled / 60;
   milesTraveled = hourstraveled * milesPerHour;
   return milesTraveled;
}

int main() {
   double milesPerHour;
   double minutesTraveled;

   cin >> milesPerHour;
   cin >> minutesTraveled;

   cout << "Miles: " << MphAndMinutesToMiles(milesPerHour, minutesTraveled) << endl;

   return 0;
}
