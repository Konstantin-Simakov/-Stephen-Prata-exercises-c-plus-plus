// exercise5.cpp -- Chapter 6
#include <iostream>
#include <cfloat>			// for DBL_EPSILON

int main(void)
{
	using namespace std;
	// twarp number and tax rate respectively
	const int TWARPS_1 = 5000;
	const int TWARPS_2 = 10000;
	const int TWARPS_3 = 20000;
	const float RATE_2 = 0.1;
	const float RATE_3 = 0.15;
	const float RATE_4 = 0.2;
	
	// setting output formatting
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);

	cout << "Enter your disired salary (in twarps;\n"
			"q or a negative number to quit):\n";
	double salary, tax_rate;
	while (cin >> salary && salary >= 0)
	{
		if (salary <= TWARPS_1)
			tax_rate = 0.0;
		else if (salary <= (TWARPS_1 + TWARPS_2))
			tax_rate = RATE_2 * (salary - TWARPS_1);
		else if (salary <= (TWARPS_1 + TWARPS_2 + TWARPS_3))
			tax_rate = RATE_2 * TWARPS_2 + 
					   RATE_3 * (salary - (TWARPS_1 + TWARPS_2));
		else  // if (salary > (TWARPS_1 + TWARPS_2 + TWARPS_3))
			tax_rate = RATE_2 * TWARPS_2 + 
					   RATE_3 * TWARPS_3 + 
					   RATE_4 * (salary - (TWARPS_1 + TWARPS_2 + TWARPS_3));
		cout << "Tax rate = " << tax_rate << endl;
		
		cout << "Enter the next salary value: ";
	}
	cout << "Bye!\n";

	return 0;
}
