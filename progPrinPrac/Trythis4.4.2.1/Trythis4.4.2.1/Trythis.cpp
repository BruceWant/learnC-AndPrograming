// Try this chapter 4.4.2.1 write out a table of characters
// with their corresponding integer values
#include <iostream>
using namespace std;
int main()
{
	char ch = 'a';
	while (ch < 123)
	{
		cout << ch << '\t' << ch + 0 << endl;
		++ch;
	}
	return 0;
}