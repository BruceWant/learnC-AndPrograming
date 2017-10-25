// Try this 4.6 practice with vector
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	vector<string> word;
	for (string str; cin >> str;)
		word.push_back(str);
	cout << "word's length is " << word.size() << endl;

	//sort(word.begin(),word.end());

	for (int i = 0; i < word.size(); ++i)
		if (word[i] == "Broccoli" || word[i] == "A")
			cout << "BLEEP" << endl;
		else
			cout << word[i] << endl;
	return 0;
}