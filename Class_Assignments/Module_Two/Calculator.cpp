/*
 * Calculator.cpp
 *
 *  Date: 9/11/2022
 *  Author: Kyle Reddoch
 */

#include <iostream>

using namespace std;

int main() // changed void to int
{
	// char statement[100]; removed this as it isn't used in calculator
	double op1, op2; // changed int to double to allow for decimals
	char operation;
	char answer = 'Y'; // added ; to finished declaring the variable | also changed to single quotes as chars are in single quotes

		while (answer == 'y' || answer == 'Y') // added an option for Y in case the user types that instead of lower y the app will still run
		{
			cout << "Enter expression" << endl;

			cin >> op1 >> operation >> op2; // changed to read the way the user inputted the numbers

			if (operation == '+') // removed ; and corrected double quotes to single quotes

				cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // correct >> to << so cout would continue to function

			if (operation == '-') // removed ;

				cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // corrected >> to << again

			if (operation == '*')

				cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // added ; to ensure cout functions properly
				// corrected operator sign to * to reflect users choice

			if (operation == '/')

				cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // corrected operator sign to / to reflect users choice

			cout << endl << "Do you wish to evaluate another expression? " << endl; // added a newline for better readability

			cin >> answer;
		}

		// added this to end program when user type anything other than y or Y
		cout << endl << "Program Finished.";
		return 0;
}