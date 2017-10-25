// exercsie 3.5 using operator + to practcise concatenation.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string str, str2;
	cin >> str >> str2;
	cout << str + str2 << endl;   // direct concatenate.
	cout << str + " " + str2 << endl;   // concatenate two string by separate them

	return 0;
}