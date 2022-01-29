// exercise5.cpp -- Chapter 5
#include <iostream>

int main(void)
{
	using namespace std;
	const int MONTHS = 12;
	const char * months[MONTHS] = { "Jan", "Feb", "Mar", 
			"Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
	};
	int sales[MONTHS];		// in books, not money
	int sum = 0;

	cout << "Enter monthly book sales.\n";
	for (int month = 0; month < MONTHS; month++)
	{
		cout << "Month: " << months[month] << "\t Sales: ";
		cin >> sales[month];
		sum += sales[month];
	}
	cout << "The total sum of book sales = " << sum << endl;

	return 0;
}
