// exercise 3.20  print the sum of each pair of adjacent elements.
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
	int num;
	vector<int> number;
	while (cin >> num)
		number.push_back(num);

	for (vector<int>::size_type i = 0; i != number.size(); i += 2)   // i >= 0 and i < number.size()
															   // decltype(number.size()).
		if (number.size() % 2 == 0)
			cout << number[i] + number[i + 1] << " ";
		else
			cout << number[i] + number[i + 1]
	cout << endl;

	return 0;
}