// exercise2.cpp -- Chapter 5
#include <iostream>
#include <array>				// for array template class

const int ARSIZE = 1 + 100;		// the number of factorials including 0!

int main(void)
{
	std::array<long double, ARSIZE> factorials;
	factorials[1] = factorials[0] = 1.0;

	// Calculating
	int i;
	for (i = 2; i < ARSIZE; i++)
		factorials[i] = i * factorials[i - 1];

	// Output
	for (i = 0; i < ARSIZE; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;

	return 0;
}
