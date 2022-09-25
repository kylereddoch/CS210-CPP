/*
Assign currentSize with the size of the sensorReadings vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> sensorReadings(4);
   int currentSize;
   int input;
   cin >> input;

   sensorReadings.resize(input);

   currentSize = sensorReadings.size();

   cout << "Number of elements: " << currentSize << endl;

   return 0;
}
