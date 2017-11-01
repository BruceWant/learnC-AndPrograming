// exercise 4.6 determine whether a integer number is a even or odd
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int num = 0;
	
	while (cin >> num)
	{
		if (num % 2 == 0)
			cout << "the integer number " << num << " is even." << endl;
		else
			cout << "the integer number " << num << " is odd." << endl;
	}

	return 0;
}