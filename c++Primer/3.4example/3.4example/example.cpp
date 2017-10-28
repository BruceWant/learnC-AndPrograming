// an example from c++ Primer
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string s = "something else";     // capitalize firt word. if first character is a whitespace, s won't change.
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);
	cout << s << endl;
}