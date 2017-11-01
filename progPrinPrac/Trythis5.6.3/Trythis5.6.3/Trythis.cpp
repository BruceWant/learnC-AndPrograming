// Try this 
// to see what an uncaught exception error looks like
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void error(string s)
{
	throw runtime_error(s);
}
int main()
{
	string s;
	error(s);
	return 0;
}