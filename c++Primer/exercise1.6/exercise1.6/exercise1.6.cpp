// Exercise 1.6 write my own version of a program that prints the sum of set of value use "while" 
// read from the "cin"

#include <iostream>

int main()
{
	int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is: " << sum << std::endl;

	return 0;
}