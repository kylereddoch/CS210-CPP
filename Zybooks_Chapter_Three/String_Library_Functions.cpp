/*
Assign the size of userInput to stringSize. Ex: if userInput is "Hello", output is:
Size of userInput: 5
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
   int stringSize;

   getline(cin, userInput);

   stringSize = userInput.size();

   cout << "Size of userInput: " << stringSize << endl;

   return 0;
}
