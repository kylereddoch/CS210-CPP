/*
Define stubs for the functions called by the below main(). Each stub should print "FIXME: Finish FunctionName()" followed by a newline, and should return -1. Example output:
FIXME: Finish GetUserNum()
FIXME: Finish GetUserNum()
FIXME: Finish ComputeAvg()
Avg: -1
*/

#include <iostream>
using namespace std;

int GetUserNum() {
   cout << "FIXME: Finish GetUserNum()" << endl;
   return -1;
}

int ComputeAvg(int, int) {
   cout << "FIXME: Finish ComputeAvg()" << endl;
   return -1;
}

int main() {
   int userNum1;
   int userNum2;
   int avgResult;

   userNum1 = GetUserNum();
   userNum2 = GetUserNum();

   avgResult = ComputeAvg(userNum1, userNum2);

   cout << "Avg: " << avgResult << endl;

   return 0;
}
