// exercise1.cpp -- Chapter 6
#include <iostream>
#include <cctype>					// for isupper(), islower(), toupper(), tolower(), isdigit()

int main(void)
{
	using namespace std;
	char ch;

	cout << "Enter the text (press @ to exit):\n";
	while (cin.get(ch) && ch != '@')
	{
		if (!isdigit(ch))
		{
			if (isupper(ch))
				ch = tolower(ch);
			else if (islower(ch))
				ch = toupper(ch);
			cout << ch;				// output all characters besides digital characters
		}							// and converting all alphabetic characters to another case
	}
	cout << "\nDone!\n";

	return 0;
}
