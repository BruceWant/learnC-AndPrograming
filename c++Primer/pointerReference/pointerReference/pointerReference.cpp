// examine the result of  int **ppi = &pi
#include <iostream>
int main()
{
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;

	int *const p = &ival;
	int i = 14;
	int &j = 0;
	return 0;
}