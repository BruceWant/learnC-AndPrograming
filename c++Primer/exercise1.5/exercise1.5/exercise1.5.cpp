// exercise1.5.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

/*
 *comment pairs /*    */ cannot nest.
 *"cannot nest" is considered source code,
 * as is the rest of the program
 */

 // /*
 // *everything inisde a single-line commentis ignored
 // *including nest comment pairs
 // */




int main()
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1;
	std::cin >> v2;

	std::cout << "The sum of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is: ";
	std::cout << v1 * v2;
	std::cout << std::endl;

    return 0;
}

