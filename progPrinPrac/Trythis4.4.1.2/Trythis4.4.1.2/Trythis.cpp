// Try this chapter 4.4.1.2 
// using switch rewrite currency convertion program
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the amount of money you want to convert "
		"with unit(y, e, p, c('c' represent China yuan), and k: " << endl;
	double amount = 0.0;
	char unit = 'a';
	cin >> amount >> unit;

	switch (unit) {
	case 'y':
		cout << amount << " yen == " << amount * 0.0088 
			<< " dollars" << endl; // 1 yen == 0.0088 dollars
		break;
	case 'e':
		cout << amount << " euro == " << amount * 1.18
			<< " dollars" << endl;               // 1 euro == 1.18 dollars
		break;
	case 'p':
		cout << amount << " pound == " << amount * 1.32
			<< " dollars" << endl;              // 1 pound == 1.32 dollars
		break;
	case 'c':     // because "yen" and "yuan" repreated, so change "yuan" to "China yuan"('c')
		cout << amount << " yuan == " << amount * 0.15
			<< " dollrs" << endl;              // 1 yuan == 0.15 dollars
		break;
	case 'k':
		cout << amount << " kroner == " << amount * 0.16
			<< " dollars" << endl;             // 1 kroner == 0.16 dollars
		break;
	default:
		cout << "Sorry! I do not know " << unit << endl;
		break;
	}

	return 0;
}