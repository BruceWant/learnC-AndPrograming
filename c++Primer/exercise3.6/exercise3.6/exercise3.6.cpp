// exercise 3.6 practice rang-for
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string str = "something";  // string str("something");
	//for (auto &c : str)       // if use char instead auto it would be ok.
	for (char &c : str)          // exercise 3.7 yes it output the correct result.
		c = 'X';
	cout << str << endl;


	// exercise 3.8
	string str2("something");  // string str2 = ("something"); string str2 = str; string str2(str);
	string::size_type index = 0;
	while (index < str2.size())
	{
		str2[index] = 'X';
		++index;
	}
	cout << str2 << endl;

	// using traditional for loop
	string str3(9, 'a');     // str3 totally have 9 'a'.
	for (string::size_type index2 = 0; index2 < str3.size(); ++index2)
		str3[index2] = 'X';
	cout << str3 << endl;

	return 0;
}