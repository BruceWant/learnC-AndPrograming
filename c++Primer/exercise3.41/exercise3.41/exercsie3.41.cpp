// redo exercise 3.3.3 redo exercise 3.13
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
	vector<int> v3(10, 42);  // 10 element, each is 42.
	for (auto i = v3.cbegin(); i != v3.cend(); ++i)
		cout << *i << " ";
	cout << "\nthe size of vector<int> v3(10,42): " << v3.size();
	cout << endl;

	vector<string> v7{ 10, "hi" };   // 10 element, each is "hi".
	for (auto i = v7.cbegin(); i != v7.cend(); ++i)
		cout << *i << " ";
	cout << "\nthe vector<string> v7{10,\"hi\"}: " << v7.size() << endl;
	return 0;
}