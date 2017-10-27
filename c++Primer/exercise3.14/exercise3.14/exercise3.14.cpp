// exercise 3.14 a program that read a ints from user and 
// store it in the vector
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
	//int num;
	//vector<int> number;
	//while (cin >> num)
	//	number.push_back(num);

	//for (int i = 0; i != number.size(); ++i)
	//	cout << number[i] << " ";
	//cout << endl;

	string str;
	vector<string> string;
	while (cin >> str)
		string.push_back(str);

	for (int j = 0; j != string.size(); ++j)
		cout << string[j] << " ";
	cout << endl;
	return 0;
}