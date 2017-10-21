// exercise in order to practice the user to prompting to write
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Please enter your first name: " << endl;
	string name;
	cin >> name;
	cout << "Hello, " << name << std::endl;

	// modified code 
	cout << "Enter the name of a person you want to: " << endl;
	string name2;
	cin >> name2;
	cout << "Dear " << name2 << ","
		<< "How are you?\n"
		<< "I: i'm fine!" << endl;

	cout << "Enter the name of another friend: " << endl;
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?" << endl;

	cout << "Enter an \'m\' if your friend is male and \'f\' if your frien is female" << endl;
	char friend_sex;
	cin >> friend_sex;
	if (friend_sex == 'm')
		cout << "if you see " << friend_name
		<< " please ask him to call me." << endl;
	if (friend_sex == 'f')
		cout << "if you see " << friend_name
		<< " please ask her to call me." << endl;

	cout << "Enter your age: " << endl;
	int age;
	cin >> age;
	if (age <= 0 || age >= 110)
		cerr << "you're kidding!" << endl;
	else if (age < 12)
		cout << "Next year you will be " << age + 1 << "." << endl;
	else if (age == 17)
		cout << "Next year you will be able to vote." << endl;
	else if (age > 70)
		cout << "I hope you are enjoying retirement." << endl;
	else
		cout << "I hear you just had a birthday and you are "
		<< age << " years old." << endl;

	cout << "\n\nYours sincerely, wanglintao" << endl;
	return 0;
}