// exercise7.cpp -- Chapter 6
#include <iostream>
#include <cstring>			// for strcmp()
#include <cctype>			// for isalpha()

int main(void)
{
	using namespace std;
	const int SIZE = 40;
	char word[SIZE];
	int vowels = 0;			// the number of words beginning with vowel
	int consonants = 0;		// the number of words beginning with consonant
	int others = 0;			// the number of other words

	cout << "Enter words (q to quit):\n";
	while (cin >> word && strcmp(word, "q"))
	{
		if (isalpha(word[0]))
		{
			switch (word[0])
			{
				case 'A':
				case 'a':
				case 'E':
				case 'e':
				case 'I':
				case 'i':
				case 'O':
				case 'o':
				case 'U':
				case 'u':
				case 'Y':
				case 'y':
					vowels++;
					break;
				default:
					consonants++;
			}
		}
		else
			others++;
	}

	cout << vowels << " words beginning with vowels\n"
		 << consonants << " words beginning with consonants\n"
		 << others << " others\n";

	return 0;
}
