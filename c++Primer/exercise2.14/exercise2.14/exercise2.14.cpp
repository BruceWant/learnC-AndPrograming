// exercise 2.14 
// just for illustrated purpose, this is a bad idea
// I guess the result of cout is the sum of 0 to 9 inclusive.

#include <iostream>
int main()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;
	std::cout << i << " " << sum << std::endl;

	char c = 'x';
	int i1 = c;
	int i2 = 'x';
	char c2 = i1;
	std::cout << c << " " << i1 << " " << c2 << '\n';
	return 0;
}
// Oops! forgot to predict the result of i.