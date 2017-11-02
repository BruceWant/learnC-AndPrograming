// exercise 4.22 comparing conditional operator with if-else statement.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	int grade = 0;
	cin >> grade;
	string level = "";
	level = (grade > 90) ? "High pass"
		: (grade > 60 && grade < 75) ? "Low pass"
		: (grade < 60) ? "Fail" : "Pass";
	cout << level << endl;

	// use if-else statement
	int grade2 = 0;
	cin >> grade2;
	string lev = "";
	if (grade2 > 90)
		cout << "High pass" << endl;
	else if (grade2 > 60 && grade2 < 75)
		cout << "Low pass" << endl;
	else if (grade2 < 60)
		cout << "Fail" << endl;


	// exercise 4.23
	string s = "word";
	string pl = s + (s[s.size() - 1] == 's' ? "" : "s");  // ?????????????
	// string pl = s + s[s.size() - 1] == 'ss ? "" : "s";   //  precedence problem.
	return 0;
}