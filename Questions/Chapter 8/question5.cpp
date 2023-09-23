// question5.cpp -- Chapter 8
#include <iostream>
#include <array>			// For std::array
#include <string>			// For std::string

const int SEASONS = 4;
const std::array<std::string, SEASONS> SNAMES = {
	"Spring", "Summer", "Fall", "Winter"
};

void fill(std::array<double, SEASONS> & d_a);
void show(const std::array<double, SEASONS> & d_a);

int main(void)
{
	std::array<double, SEASONS> expenses;

	fill(expenses);
	show(expenses);

	return 0;
}

void fill(std::array<double, SEASONS> & d_a)
{
	using namespace std;
	for (int i = 0; i < SEASONS; i++)
	{
		cout << "Enter " << SNAMES[i] << " expenses: ";
		// Input expenses by a season.
		cin >> d_a[i];
	}
}

void show(const std::array<double, SEASONS> & d_a)
{
	using namespace std;
	double total = 0.0;

	// Output expenses by a season.
	cout << "\nEXPENSES\n";
	for (int i = 0; i < SEASONS; i++)
	{
		cout << SNAMES[i] << ": $" << d_a[i] << endl;
		total += d_a[i];
	}
	// Output a total expenses.
	cout << "Total Expenses: $" << total << endl;
}
