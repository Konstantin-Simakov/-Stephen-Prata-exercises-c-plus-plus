// exercise6.cpp -- Chapter 5
#include <iostream>

int main(void)
{
	using namespace std;
	const int MONTHS = 12;
	const char * months[MONTHS] = { 
		"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
	};
	const int YEARS = 3;
	int sales[YEARS][MONTHS];		// in books, not money
	int total, subtotal;

	cout << "Enter monthly book sales for " << YEARS << " years.\n";
	total = 0;
	for (int year = 0; year < YEARS; year++)
	{
		cout << "Year: " << year + 1 << endl;
		subtotal = 0;
		for (int month = 0; month < MONTHS; month++)
		{
			cout << "Month: " << months[month] << "\t Sales: ";
			cin >> sales[year][month];

			subtotal += sales[year][month];
		}
		cout << "The subtotal sum of book sales for this year = "
			 << subtotal << endl;

		total += subtotal;
	}
	cout << "\nThe total sum of book sales for " << YEARS << " years = " << total << endl;

	return 0;
}
