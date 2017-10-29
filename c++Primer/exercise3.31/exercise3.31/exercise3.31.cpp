// exercise 3.31 define an array initail each element same as its poistion
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
	constexpr int length = 10;
	int num[length] = {};    // int num[10];
	for (size_t i = 0; i < length; ++i)
		num[i] = i;
	for (auto i : num)
		cout << i << " ";
	cout << endl;


	// exercise 3.32 use vector
	vector<int> number;
	for (int i = 0; i < 10; ++i)
		number.push_back(i);

	for (vector<int>::size_type i = 0; i < 10; ++i)
		cout << number[i] << " ";
	cout << endl;

	return 0;
}