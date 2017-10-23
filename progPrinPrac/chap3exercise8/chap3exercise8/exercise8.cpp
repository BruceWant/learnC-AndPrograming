// exercise 8, determin whether a number is a odd or even.
#include <iostream>
using namespace std;
int main()
{
	int num = 0;   // num is number 
	//cin >> num;   // optimize
	while (cin >> num)
	{
		if (num % 2)
			cout << "The value " << num << " is an odd number." << endl;
		else
			cout << "The value " << num << " is an even number." << endl;
	}
	return 0;
}