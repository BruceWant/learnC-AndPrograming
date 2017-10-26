// chapter 4 drill 1 practice while loop.
#include <iostream>
using namespace std;
int main()
{
	cout << "enter two integer numbers: ";
	double val1, val2;
	while (cin >> val1)
	{
			if (val1 > val2)
			{
				if (val1 - val2 < 0.01)
					cout << "the numbers are almost equal." << endl;
				cout << "the smaller number is: " << val2
					<< "\nthe larger number is: " << val1 << endl;
			}
			else if (val1 < val2)
			{
				if (val2 - val1 < 0.01)
					cout << "the numbers are almost equal." << endl;
				cout << "the smaller number is: " << val1
					<< "\nthe larger number is: " << val2 << endl;
			}
			else
				cout << "the numbers are equal" << endl;
	}

	return 0;
}