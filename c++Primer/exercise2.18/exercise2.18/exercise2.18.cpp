//exercise 2.18
// in order to understand the difference between 
// the value of a pointer and the value to which pointer points.

#include <iostream>
int main()
{
	int i = 1, j = 10;
	int *ptr = nullptr, *ptr2 = nullptr;
	
	ptr = &i;        // &i address-of operator; change the value of the pointer ptr.
	std::cout << "the value of ptr: " << *ptr << std::endl;   // *ptr dereference operator; I guess the result is 1.

	*ptr = 4;      // *ptr dereference operator; change the value to which pointer ptr to.
	std::cout << "the value of i: "<< *ptr << std::endl;   // I guess the result is 4.

	ptr2 = &j;        // &j address-of operator; change the value of the pointer ptr.
	std::cout << "the value of ptr2: "<< *ptr2 << std::endl;   // *ptr2 dereference operator; I guess the result is 10.

	*ptr2 = 15;  // *ptr dereference operator; change the value to which pointer ptr to.
	std::cout << "the value of j: " << *ptr2 << std::endl; // *ptr is dereference operator; I guess the result is 15.
}