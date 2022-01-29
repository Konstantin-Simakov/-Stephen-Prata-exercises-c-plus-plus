// exercise8.cpp -- Chapter 5
#include <iostream>
#include <cstring>			// for strcmp()

int main(void)
{
	using namespace std;
	const int SIZE = 40;	// one word length
	char word[SIZE];
	int count = 0;

	cout << "Enter words (to quit enter done):\n";
	cin >> word;
	while (strcmp(word, "done"))
	{
		count++;
		cin >> word;
	}
	cout << "You've entered " << count << " words.\n";

	return 0;
}
