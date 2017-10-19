// simple program to exercise operators
#include <iostream>
//#include <cmath>
#include <algorithm>
using namespace std;
void keep_window_open() { char ch; cin >> ch; }

int main()
{
	cout << "Please enter an integer value: ";
	int n;
	cin >> n;
	cout << "n== " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n*n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< '\n';
	return 0;
}