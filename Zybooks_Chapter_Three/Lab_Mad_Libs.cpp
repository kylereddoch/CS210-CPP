/*
Mad Libs are activities that have a person provide various words, which are then used to complete a short story in unexpected (and hopefully funny) ways.

Write a program that takes a string and an integer as input, and outputs a sentence using the input values as shown in the example below. The program repeats until the input string is quit and disregards the integer input that follows.

Ex: If the input is:

apples 5
shoes 2
quit 0
the output is:

Eating 5 apples a day keeps you happy and healthy.
Eating 2 shoes a day keeps you happy and healthy.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

//variables
   string word;
   int number;

//Getting user input for variables
   cin >> word >> number;

   while (number != 0) {
      cout << "Eating " << number << " " << word << " a day keeps you happy and healthy." << endl;
      cin >> word >> number;
   }

   return 0;
}
