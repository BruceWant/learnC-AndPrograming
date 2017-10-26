// exercise 6
#include <iostream>
using namespace std;

int main()
{
	cout << "enter two numbers: " << endl;
	double val1, val2;
	while (cin >> val1)
	{
		while (cin >> val2)
		{
			if (val1 < val2)
			{
				cout << val2 << " is the largest so far." << endl;
			}
			else if (val1 > val2)
			{
				cout << val2 << " is the smallest so far." << endl;
			}
			val1 = val2;   // val2 assign to val to prepare next comparison.
		}
	}
}