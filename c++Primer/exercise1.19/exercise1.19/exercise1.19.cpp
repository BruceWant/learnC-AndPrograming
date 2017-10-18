// exercise 1.19 
// modify the exercise 1.11

#include <iostream>

int main()
{
	std::cout << "enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;

	if (v1 < v2)
	{
		while (v1 <= v2)
		{
			std::cout << v1 << " ";
			++v1;
		}
	}
	std::cout << std::endl;

	return 0;
}