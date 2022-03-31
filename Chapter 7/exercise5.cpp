// exercise5.cpp -- Chapter 7
#include <iostream>

unsigned long long factorial(unsigned);

int main(void)
{
	using namespace std;
	int num;

	cout << "Enter a number (q or negative number to quit): ";
	while (cin >> num && num >= 0)
	{
		cout << num << "! = " << factorial(num) << endl;
		cout << "Enter the next number (q negative number to quit): ";
	}
	cout << "Bye.\n";

	return 0;
}

unsigned long long factorial(unsigned n)
{
	unsigned long long res;

	if (n > 0)
		res = n * factorial(n - 1);
	else
		res = 1;

	return res;
}
