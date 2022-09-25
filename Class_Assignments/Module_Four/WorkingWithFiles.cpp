/*
Module Four Assignment: Working With Files
Author: Kyle Reddoch
Date: 9/25/22
Class: CS-210
 */


#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

// declares fahrenheitToCelsius function
void fahrenheitToCelsius(int &temp) {

	temp = ((double)temp - 32.0) * (0.5556); // converts temps from fahrenheit to celsius
}

int main(){
	// initializing variables and vectors
	ifstream inFS;
	ofstream outFS;
	string fileWord;
	int fileNum;
	vector<string> citiesVect;
	vector<int> tempsVect;


	// opens the FahrenheitTemperature.txt file
	cout << "Opening file: FahrenheitTemperature.txt ..." << endl;
	inFS.open("FahrenheitTemperature.txt");
	if (!inFS.is_open()) {
		cout << "Error: Unable to open the file!" << endl;
		return 1;
	}

	// reads the info from the FahrenheitTemperature.txt file
	cout << "Here are the temps from your current file:" << endl;
	inFS >> fileWord;
	inFS >> fileNum;
	while (!inFS.fail()) {
		citiesVect.push_back(fileWord);
		tempsVect.push_back(fileNum);
		
		inFS >> fileWord;
		inFS >> fileNum;

	}
	
	// interates through each city and temp
	for (int i = 0; i < citiesVect.size(); i++) {
		cout << citiesVect.at(i) << " " << tempsVect.at(i) << endl;
	}
	
	// check if reached end of file
	//errors if not
	if (!inFS.eof()) {
		cout << "Error: Input failure before reaching the end of the file!" << endl;
	}
	cout << "Closing FahrenheitTemperature.txt ..." << endl;
	
	inFS.close(); // closes FahrenheitTemperature.txt file

	system("pause");

	// create and open CelsiusTemperature.txtfile
	cout << "Opening file: CelsiusTemperature.txt ..." << endl;
	outFS.open("CelsiusTemperature.txt");

	// checks if file is already opened
	if (!outFS.is_open()) {
		cout << "Error: Could not open the new file, 'CelsiusTemperature.txt'!" << endl;
		return 1;
	}
	
	cout << endl;
	cout << "Here's your new file with temps converted to Celsius:" << endl;
	
	// iterates through each city/temp and calls fahrenheitToCelsius func
	// outputs converted temp in celsius
	for (int i = 0; i < citiesVect.size(); i++) {
		fahrenheitToCelsius(tempsVect.at(i));
		outFS << citiesVect.at(i) << " " << tempsVect.at(i) << endl;
		cout << citiesVect.at(i) << " " << tempsVect.at(i) << endl;
			
	}

	cout << "Closing CelsiusTemperature.txt ..." << endl;

	outFS.close(); // closes CelsiusTemperature.txt file

	return 0;
}