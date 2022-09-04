#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

	/* Type your code here. */
	double milesPerGallon;
	double dollarsPerGallon;
	int miles1;
	int miles2;
	int miles3;

	miles1 = 20;
	miles2 = 75;
	miles3 = 500;

	cin >> milesPerGallon;
	cin >> dollarsPerGallon;

	cout << fixed << setprecision(2);
	cout << (miles1 / milesPerGallon) * dollarsPerGallon;
	cout << " ";
	cout << (miles2 / milesPerGallon) * dollarsPerGallon;
	cout << " ";
	cout << (miles3 / milesPerGallon) * dollarsPerGallon;
	cout << endl;

	return 0;
}
