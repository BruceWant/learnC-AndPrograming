// exercise1.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;

	std::cout << "The result of product " << v1 << " and " <<
		v2 << " is: " << v1 * v2 << std::endl;

    return 0;
}

