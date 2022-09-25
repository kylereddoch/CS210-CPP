/*
Write an expression that will cause the following code to print "Equal" if the value of sensorReading is "close enough" to targetValue. Otherwise, print "Not equal". Ex: If targetValue is 0.3333 and sensorReading is (1.0/3.0), output is:
Equal
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double targetValue;
   double sensorReading;

   cin >> targetValue;
   cin >> sensorReading;

   if (fabs(sensorReading - targetValue) < 0.0001) {
      cout << "Equal" << endl;
   }
   else {
      cout << "Not equal" << endl;
   }

   return 0;
}
