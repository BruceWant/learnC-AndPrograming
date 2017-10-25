// exercise 3.4 practice comparison operators
// and size() function
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string str, str2;
	getline(cin, str);
	getline(cin, str2);
	if (str == str2)         // if str and str2 has the same charcter.
		cout << str << " is equal " << str2 << endl;
	else if (str < str2)
		cout << str << " is less than " << str2 << endl;
	else
		cout << str << " is greater than " << str2 << endl;
	
	if (str.size() == str2.size()) // if str and str2 has the same length.
		cout << str << " has the same length as " << str2 << endl;
	else if (str.size() < str2.size())
		cout << str2 << " is longer." << endl;
	else
		cout << str << " is longer." << endl;

	return 0;
}