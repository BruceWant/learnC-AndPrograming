// exercise 4 make a calculator? Maybe.
#include <iostream>
using namespace std;
int main()
{
	int val1 = 0, val2 = 0;
	cin >> val1 >> val2;
	if (val1 > val2)
		cout << val1 << " is larger, "
		<< val2 << " is smaller." <<endl;
	cout << val1 << " add " << val2 << " is: " << val1 + val2 << endl;
	cout << val1 << " minus " << val2 << " is: " << val1 - val2 << endl;
	cout << val1 << " times " << val2 << " is: " << val1 * val2 << endl;
	cout << val1 << " divided by " << val2 << " is: " << val1 / val2 << endl;

	// modified version from above.
	double val3 = 0, val4 = 0;
	cin >> val3 >> val4;
	if (val3 > val4)
		cout << val3 << " is larger, "
		<< val4 << " is smaller." << endl;
	cout << val3 << " add " << val4 << " is: " << val3 + val4 << endl;
	cout << val3 << " minus " << val4 << " is: " << val3 - val4 << endl;
	cout << val3 << " times " << val4 << " is: " << val3 * val4 << endl;
	cout << val3 << " divided by " << val4 << " is: " << val3 / val4 << endl;
	return 0;
}