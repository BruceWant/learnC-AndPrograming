// exercise 4.21 practice conditional operator
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
int main()
{
	vector<int> vec = { 1,2,3,4,5,6,7,8,9,10 };
	for (auto &element : vec)
	{
		element = (element % 2 != 0) ? (2 * element) : element;  // if element
		                   // is an odd, then double it, otherwise don't change it.
	}

	for (vector<int>::size_type i = 0; i != vec.size(); ++i)  // vector<int>::size_type is unsigned.
		cout << vec[i] << " ";
	cout << endl;

	return 0;
}