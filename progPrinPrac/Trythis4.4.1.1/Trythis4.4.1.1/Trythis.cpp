// Try this chapter 4.4.1.1                          // conversoin rates from google on 10.24.2017
// use the example as a model to write another program
// that converts some units into dollars.
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Enter one number followed by a unit"
		"(yen, euro, pound, and yuan" << endl;
	double money = 0.0;
	string unit = "";
	cin >> money >> unit;

	if (unit == "yen")
		cout << money << " yen == " << money * 0.0088 << " dollars"<< endl;  // 1 yen == 0.0088 dollar
	else if (unit == "euro")
		cout << money << " euro == " << money * 1.18 << " dollars" << endl; // 1 euro == 1.18 dollar
	else if (unit == "pound")
		cout << money << " pound == " << money * 1.32 << " dollars" << endl; // 1 pound == 1.32 dollar
	else if (unit == "yuan")
		cout << money << " yuan == " << money * 0.15 << " dollars" << endl; // 1 yuan == 0.15 dollar
	else
		cout << "Sorry! I do not know " << unit << " dollars" << endl;

	return 0;
}