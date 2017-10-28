// type some errors and see how the compiler respond.
#include <iostream>
using namespace std;

int area(int width, int length)
{
	return width * length;
}
int main()
{
	int s1 = area(7,3);      // error: ) missing
	int s2 = area(7, 3);      // error: ; missing
	int s3 = area(7,3);  // error: Int is not a type
	int s4 = area(7,3);     // error: non-terminated character (' missing)
	
	int x0 = area(7,9);    // error: undeclared function
	int x1 = area(7,0);     // error: wrong number of arguments
	int x2 = area(3, 2);  // error: 1st argument has a wrong type
	int x3 = area(3,2);      // error: no arguments.
	int x4 = area(3,4);    // error: using period instead of comma
		return 0;
}