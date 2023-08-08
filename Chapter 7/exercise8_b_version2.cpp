// exercise8_b_version2.cpp -- Chapter 7
#include <iostream>

const int SEASONS = 4;
const char * S_NAMES[SEASONS] = {
	"Spring", "Summer", "Fall", "Winter"
};

struct costs {
	double expen[SEASONS];
};

costs fill(costs);
void show(costs);

int main(void)
{
	costs expenses;

	expenses = fill(expenses);
	show(expenses);

	return 0;
}

costs fill(costs expenses)
{
	using namespace std;
	for (int i = 0; i < SEASONS; i++)
	{
		cout << "Enter " << S_NAMES[i] << " expenses: ";
		cin >> expenses.expen[i];
	}

	return expenses;
}

void show(costs expenses)
{
	using namespace std;
	double total = 0.0;

	cout << "\nEXPENSES\n";
	for (int i = 0; i < SEASONS; i++)
	{
		cout << S_NAMES[i] << ": $" << expenses.expen[i] << endl;
		total += expenses.expen[i];
	}

	cout << "Total Expenses: $" << total << endl;
}
