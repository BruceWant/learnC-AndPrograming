// exercise 2
// convert miles to kilometers
#include <iostream>
using namespace std;
int main()
{
	double mile = 0.0;
	while (cin >> mile)
		cout << mile << " miles is equal to: "
		<< 1.609 * mile << " kilometers." << endl;     // 1 kilometer = 1.609 miles.
	return 0;

}