// exercise 3.17 read a sequence of word, store it in a vector
// then change each word to uppercase, print it
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
	string str;
	vector<string> word;
	while (cin >> str)
		word.push_back(str);
	for (int i = 0; i != word.size(); ++i)    // for each element in the word;
	{
		for (int j = 0; j < word[i].size(); ++j)   // for each character int the element.
			word[i][j] = toupper(word[i][j]);
	}

	for (int i = 0; i != word.size(); ++i)
		if (i % 8 == 0) 
			cout << '\n' << word[i] << " ";
		else
			cout << word[i] << " ";
	cout << endl;

	return 0;
}