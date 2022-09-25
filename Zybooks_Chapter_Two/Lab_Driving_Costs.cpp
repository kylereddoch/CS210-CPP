/*
Driving is expensive. Write a program with a car's miles/gallon and gas dollars/gallon (both doubles) as input, and output the gas cost for 20 miles, 75 miles, and 500 miles.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

20.0 3.1599
the output is:

3.16 11.85 79.00
Note: Real per-mile cost would also include maintenance and depreciation.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

//Initiating double data types
    double dollarsPerGallon;
    double milesPerGallon;
    double dollarsMiles;
    double twentyMiles;
    double seventyFiveMiles;
    double fiveHundredMiles;

//User input for data types
    cin >> milesPerGallon;
    cin >> dollarsPerGallon;

//Calculating dollars per mile and then calculating total cost based on miles
    dollarsMiles = dollarsPerGallon / milesPerGallon;
    twentyMiles = 20 * dollarsMiles;
    seventyFiveMiles = 75 * dollarsMiles;
    fiveHundredMiles = 500 * dollarsMiles;

//Outputting the cost based on miles
    cout << fixed << setprecision(2) << twentyMiles << " " << seventyFiveMiles << " " << fiveHundredMiles << endl;

return 0;
}
