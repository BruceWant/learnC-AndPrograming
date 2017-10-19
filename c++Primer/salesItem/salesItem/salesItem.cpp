// example from c++ primer
// Sales_Item

#include <iostream>
#include "Sales_Item.h"

int main()
{
	Sales_item item1, item2, item3;
	std::cin >> item1 >> item2 >> item3;          // read a pair of transactions
	std::cout << item1 + item2 + item3 << std::endl;   // print their sum
	return 0;
}