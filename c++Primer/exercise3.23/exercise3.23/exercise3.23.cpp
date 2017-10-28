// exercise 3.23 double the element of the vector
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
	vector<int> num{ 1,2,3,4,5,6,7,8,9,10 };
	for (auto i = num.begin(); i != num.end(); ++i)
		*i *= 2;      // *i *= 2 is equal to *i = (*i) * 2; 
	                   // or assign each value that dereference i is twice its current value.
	for (auto i = num.cbegin(); i != num.cend(); ++i)
		cout << *i << " ";
	cout << endl;


	return 0;
}