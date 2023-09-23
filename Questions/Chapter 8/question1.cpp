// question1.cpp -- Chapter 8
#include <iostream>
using namespace std;

// Example of realization of inline function.
// An inline function must be short, and not recursive.
inline void eatline(void)
{
	while (cin.get() != '\n')
		continue;
}

int main(void)
{
	cout << "Enter an integer number: ";
	int num;
	cin >> num;
	eatline();

	return 0;
}
