// exercise1.13.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "enter to integers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;

	for (; v1 <= v2; ++v1)
		std::cout << v1 << " ";
	std::cout << std::endl;
	system("pause");
    return 0;
}

