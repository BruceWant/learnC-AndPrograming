// exercise 4.10 
// practice logical operation ==
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	cout << "enter an integer number, \"42\" end this program " << endl;
	int num;
	while (cin >> num && num != 42)    
	{
		cout << "you entered: " << num << endl;
	}

	int x = 10, y = 20;
	x = y = 30;              // y has the value 30.
	cout << x << y << endl;
	return 0;
}