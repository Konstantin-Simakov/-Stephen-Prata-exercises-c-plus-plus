// exercise3.cpp -- Chapter 5
#include <iostream>
#include <cmath>			// for fabs()
#include <cfloat>			// for DBL_EPSILON

int main(void)
{
	using namespace std;
	double sum = 0.0;
	double num;
	
	cout << "Enter a number: ";
	cin >> num;
	while (fabs(num - 0.0) >= DBL_EPSILON)
	{
		sum += num;
		cout << "Enter the next number (or 0 to quit): ";
		cin >> num;
	}
	cout << "The total sum of numbers is " << sum << endl;
	cout << "Done!\n";

	return 0;
}
