// exercise 3.16 print out the result of exercise 3.13
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
	vector<int> v3(10, 42);   // have 10 elements,each is equal to 42.
	for (auto i : v3)
		cout << i << " ";
	cout << "vector<int> v3(10, 42): " << endl;

	vector<int> v5{ 10, 42 };   // have 2 element, 10 and 42.
	for (auto i : v5)
		cout <<  i << " ";
	cout << "vector<int> v5{10, 42}: " << endl;

	vector<string> v7{ 10, "hi" };   // have 10 element, each is equal to "hi".
	for (auto i : v7)
		cout <<  i << " ";
	cout << "vector<string> v7{10, \"hi\"}: " << endl;
	return 0;
}