// Try this 4.4.2.2
// rewrite the character value example from previous
#include <iostream>
using namespace std;
int main()
{
	for (char ch = 'A'; ch < 'A' + 25; ++ch)
		cout << ch << '\t' << ch + 0 << endl;
	return 0;
}