// exercise7.cpp -- Chapter 5
#include <iostream>

const int SIZE = 40;

struct car {
	char model[SIZE];	// car model
	int year;			// year of car manufacture
};

int main(void)
{
	using namespace std;
	cout << "How many cars to put in the catalog? ";
	int num;			// the number of structures in an array
	(cin >> num).get();
	car * pc = new car [num];

	for (int i = 0; i < num; i++)
	{
		cout << "Car #" << i + 1 << ":\n";

		cout << "Enter a manufacture: ";
		cin.getline(pc[i].model, SIZE);
		cout << "Enter a manufacture year: ";
		(cin >> pc[i].year).get();
	}

	cout << "Here is your collection:\n";
	for (int i = 0; i < num; i++)
	{
		cout << pc[i].year << " ";
		cout << pc[i].model << endl;
	}

	return 0;
}
