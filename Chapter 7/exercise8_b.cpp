// exercise8_b.cpp
#include <iostream>

const int SEASONS = 4;
const char * S_NAMES[SEASONS] = {
	"Spring", "Summer", "Fall", "Winter"
};

struct costs {
	double expen[SEASONS];
};

void fill(costs *);
void show(const costs *);

int main(void)
{
	costs expenses;

	fill(&expenses);
	show(&expenses);

	return 0;
}

void fill(costs * expenses)
{
	using namespace std;
	for (int i = 0; i < SEASONS; i++)
	{
		cout << "Enter " << S_NAMES[i] << " expenses: ";
		cin >> expenses->expen[i];
	}
}

void show(const costs * expenses)
{
	using namespace std;
	double total = 0.0;

	cout << "\nEXPENSES\n";
	for (int i = 0; i < SEASONS; i++)
	{
		cout << S_NAMES[i] << ": $" << expenses->expen[i] << endl;
		total += expenses->expen[i];
	}

	cout << "Total Expenses: $" << total << endl;
}
