// exercise 5.3   rewrite while loop body, use a comma instead block
#include <iostream>
int main()
{
	int sum = 0, val = 1;
	while (val <= 10)
		sum += val, ++val;   // using a comma instead a semicolon. it's ok.
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	return 0;
}