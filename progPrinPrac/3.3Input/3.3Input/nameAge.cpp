// read name and age
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please to enter your first name and age\n";
	string first_name = "???";      // string variable ("???" means "don't know the name")
	double age = -1.0;               //integer variable (-1 means "don't know the age")
	cin >> first_name >> age;    // read a string followed by an integer
	cout << "Hello, " << first_name << " (age" << age << ")\n";

	return 0;
}