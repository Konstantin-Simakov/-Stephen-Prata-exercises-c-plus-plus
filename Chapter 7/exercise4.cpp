// exercise4.cpp -- Chapter 7
#include <iostream>

long double combinations(unsigned numbers, unsigned picks);

int main(void)
{
	using namespace std;
	int total_1, choices;		// the 1st number field and number of picks allowed
	int total_2;				// the 2nd number field and dummy meganumber (one number, one pick)

	cout << "Enter the total number of choices from the first number field and\n"
			"the number of picks allowed (q to quit):\n";
	while (cin >> total_1 && total_1 >= 0 &&
		cin >> choices && choices >= 0 && 
		choices <= total_1)
	{
		cout << "And now enter the total number of choices\n"
				"from the 2nd number field (q to quit):\n";
		if (!(cin >> total_2) || total_2 < 0)
			break;

		cout << "You have one chance in "
			 << combinations(total_1, choices) * combinations(total_2, 1)
			 << " of winning.\n";

		cout << "\nEnter the next two numbers -- total number of choices\n"
				"from the first number field and\n"
				"the number of picks allowed (q to quit):\n";
	}
	cout << "Bye.\n";

	return 0;
}

// the function calculating the number of combinations 
// C from numbers to picks (C from n to k)
long double combinations(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	unsigned n, p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;		// there is implicit type conversion here

	return result;
}
