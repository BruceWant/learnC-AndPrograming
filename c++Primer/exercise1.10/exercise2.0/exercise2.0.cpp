// exercise2.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int val = 10;
	while (val >= 0)
	{
		std::cout << val << " ";
		--val;
	}
	std::cout << std::endl;
    return 0;
}

