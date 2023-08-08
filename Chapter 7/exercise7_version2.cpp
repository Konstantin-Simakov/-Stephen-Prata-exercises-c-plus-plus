// exercise7_version2.cpp -- Chapter 7
// Only the revalue() function differs compared to one from exercise7.cpp.
#include <iostream>

// Function prototypes
double * fill_array(double * begin, double * end);
void show_array(const double * begin, const double * end);
void revalue(double value, double * begin, double * end);

int main(void)
{
	using namespace std;
	const int MAX = 5;
	double properties[MAX];
	double * last = properties;
	
	last = fill_array(properties, properties + MAX);
	if (last > properties)
	{
		show_array(properties, last);
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, last);
		show_array(properties, last);
	}
	else
		cout << "There are no elements in the array.\n";
	cout << "Done.\n";

	return 0;
}

double * fill_array(double * begin, double * end)
{
	using namespace std;
	double * current;			// current pointer
	double temp;
	for (current = begin; current < end; ++current)
	{
		cout << "Enter value #" << (current - begin) + 1 << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;

		*current = temp;
	}

	return current;
}

void revalue(double value, double * begin, double * end)
{
	while (begin < end)
		*begin++ *= value;
}

void show_array(const double * begin, const double * end)
{
	using namespace std;
	for (const double * ptr = begin; ptr < end; ++ptr)
	{
		cout << "Property #" << (ptr - begin) + 1 << ": $";
		cout << *ptr << endl;
	}
}
