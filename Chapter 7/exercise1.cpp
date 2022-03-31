// exercise1.cpp -- Chapter 7
#include <iostream>

double harmonic_mean(double x, double y);

int main(void)
{
	using namespace std;
	double a, b;

	cout << "Enter two values (or q to quit): ";
	while (cin >> a >> b)
	{
		cout << "Harmonic mean of " << a << " and " << b 
			 << " is " << harmonic_mean(a, b) << endl;
		
		cout << "Enter the next two values (or q to quit): ";
	}
	cout << "Done.\n";

	return 0;
}

double harmonic_mean(double x, double y)
{
	return 2.0 * x * y / (x + y);
}
