//output the entered number from least to largest.
#include <iostream>
#include <string>   // for std::string
using namespace std;
int main()
{
	//int x = 0, y = 0, z = 0;
	// modify the type
	string x = "", y = "", z = "";
	cin >> x >> y >> z;

	if (x <= y && y <= z)
		cout << x << " " << y << " " << z;
	else if (x <= z && z <= y)
		cout << x << " " << z << " " << y;
	else if (y <= x && x <= z)
		cout << y << " " << x << " " << z;
	else if (y <= z & z <= x)
		cout << y << " " << z << " " << x;
	else if (z <= x && x <= y)
		cout << z << " "  << x << " " << y;
	else if (z <= y && y <= x)
		cout << z << " " << y << " " << x;

	cout << endl;

	return 0;
}