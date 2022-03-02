// exercise2.cpp -- Chapter 6
#include <iostream>
#include <array>

int main(void)
{
	using namespace std;
	const int ARSIZE = 10;
	array<double, ARSIZE> donates;
	double average;

	cout << "Enter up to " << ARSIZE << " values or q to finish input.\n";
	double sum = 0.0;
	int i = 0;
	while (i < ARSIZE && cin >> donates[i])
	{
		sum += donates[i];
		i++;
	}
	average = sum / i;
	cout << "Average value equals " << average << endl;

	int above = 0;		// the number of values bigger than average
	for (int k = 0; k < i; k++)
		if (donates[k] > average)
			++above;
	cout << "The number of values bigger than average is " 
		 << above << endl;

	return 0;
}
