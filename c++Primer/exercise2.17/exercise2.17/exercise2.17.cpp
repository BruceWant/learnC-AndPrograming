// exercise 2.17 What is the following results
// I guess 10 10
#include <iostream>
int main()
{
	int i, &ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl;
	
	return 0;
}

// yes, it is