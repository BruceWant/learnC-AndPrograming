// exercise 3.22 capitalize the first paragraph.
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
	vector<string> text{ "first paragraph", "", "second paragraph", "", "something else" };
	for (auto i = text.begin(); i != text.end() && !i->empty(); ++i)  // i is the first element of text.
		for (auto j = i->begin(); j != i->end(); ++j)  // i->begin() == (*i).begin() j is the first character of the first element of text.
			*j = toupper(*j);

	for (auto i = text.cbegin(); i != text.cend() && !i->empty(); ++i)  // i->empty == (*i).empty().
		cout << *i;
	cout << endl;

	return 0;
}