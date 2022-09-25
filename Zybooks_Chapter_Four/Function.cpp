/*
Use function GetUserInfo to get a user's information. If user enters 20 and Holly, sample program output is:
Holly is 20 years old.
*/

#include <iostream>
#include <string>
using namespace std;

void GetUserInfo(int& userAge, string& userName) {
   cout << "Enter your age: " << endl;
   cin >> userAge;
   cout << "Enter your name: " << endl;
   cin >> userName;
}

int main() {
   int userAge;
   string userName;

   GetUserInfo(userAge, userName);

   cout << userName << " is " << userAge << " years old." << endl;

   return 0;
}
