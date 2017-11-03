// exercise 4.28 print the size of the built-in type.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	cout << "the size of int:\t" << sizeof(int);
	cout << "\nthe size of short:\t" << sizeof(short);
	cout << "\nthe size of the long:\t" << sizeof(short);
	cout << "\nthe size of the char:\t" << sizeof(char);
	cout << "\nthe size of the string:\t" << sizeof(string);
	cout << "\nthe size of the float:\t" << sizeof(float);
	cout << "\nthe size of the double:\t" << sizeof(double) << endl;

	int x[10]; 
	int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl;    // output 10 
	cout << sizeof(p)/sizeof(*p) << endl;     //  output 1; hold a pointer need 4 bytes.
	
	return 0;
}