// exercise9.cpp -- Chapter 5
#include <iostream>
#include <string>		// for string class objects

int main(void)
{
	using namespace std;
	string word;
	int count = 0;
	
	cout << "Enter words (to quit enter done):\n";
	cin >> word;
	while (word != "done")
	{
		count++;
		cin >> word;
	}
	cout << "You've entered " << count << " words.\n";

	return 0;
}
