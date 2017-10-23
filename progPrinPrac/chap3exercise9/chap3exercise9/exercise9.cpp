// converts spelled-out number to digit, such as "zero" to 0.
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str = "";
	//cin >> str;

	while (cin >> str)   // optimize make it consecutive input.
	{
		if (str == "zero")
			cout << "digit: 0" << endl;
		else if (str == "one")
			cout << "digit: 1" << endl;
		else if (str == "two")
			cout << "digit: 2" << endl;
		else if (str == "three")
			cout << "digit: 3" << endl;
		else if (str == "four")
			cout << "digit: 4" << endl;
		else
			cout << "not a number i know" << endl;
	}
	return 0;
}