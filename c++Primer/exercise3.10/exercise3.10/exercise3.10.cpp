// exercise 3.10 practice with ispunct() function
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
	cout << "enter a string: " << endl;
	string str;
	getline(cin, str);   // input a line of string.
	for (auto &c : str)
		if (!ispunct(c))
	cout << c;
	cout << endl;
	
	return 0;
}