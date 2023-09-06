// exercise3.cpp -- Chapter 8
#include <iostream>
#include <string>		// For std::string class
#include <cctype>		// For toupper()

void to_upper_str(std::string &);

int main(void)
{
	using namespace std;
	std::string str;

	cout << "Enter a string (q to quit): ";
	while (getline(cin, str) && str[0] != 'q')
	{
		to_upper_str(str);
		cout << str << endl;

		cout << "Next string (q to quit): ";
	}
	cout << "Bye.\n";

	return 0;
}

void to_upper_str(std::string & str)
{
	for (int i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
}
