// an example from c++ primer about function getline(cin, string)
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string line;
	while (getline(cin, line))
		if (!line.empty())
		cout << line << line.size() << endl; // size() not include null('\0');
	return 0;
}