// exercise2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int v1 = 0, v2 = 0;
	std::cout << "enter to integers: " << std::endl;
	std::cin >> v1 >> v2;

	while (v1 <= v2)
	{
		std::cout << v1 << " ";
		++v1;
	}

	std::cout << std::endl;
    return 0;
}

