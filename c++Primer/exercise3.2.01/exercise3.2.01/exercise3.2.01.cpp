// exercise 3.2.01 is exercise 3.2
// practice getline(cin.string)
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string str;
	getline(cin, str);
	cout << str << endl;

	// modify getlin(cin, str) as following
	cin >> str;
	cout << str << endl;

	return 0;
}