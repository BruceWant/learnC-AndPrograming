// exercise 3.35 using pointer to set the element in the array to zero.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	constexpr size_t length = 4;
	int arr[length] = { 1,2,3,4 };
	
	for (int *pbeg = arr, *pend = arr + length; pbeg != pend; ++pbeg)
		*pbeg = 0;

	for (int i = 0; i != length; ++i)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}