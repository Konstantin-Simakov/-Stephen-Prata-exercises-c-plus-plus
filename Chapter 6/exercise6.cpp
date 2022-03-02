// exercise6.cpp -- Chapter 6
#include <iostream>
#include <cstring>			// for strcmp()

const int STRSIZE = 50;

struct patron {
	char fullname[STRSIZE];
	double donation;
};

int main(void)
{
	using namespace std;
	cout << "Enter the number of patrons: ";
	int num;		// the number of patrons
	(cin >> num).get();
	patron * people = new patron [num];

	// data input
	cout << "Enter their names and according donations (q to quit):\n";
	int i;
	for (i = 0; i < num; i++)
	{
		cin.getline(people[i].fullname, STRSIZE);
		if (!strcmp(people[i].fullname, "q"))
			break;

		cin >> people[i].donation;
		if (cin.fail())				// not if (cin.eof()) -- !!!
			break;
		else
			while (cin.get() != '\n')
				continue;
	}


	// data output
	const int GRAND = 10000;

	// 1st
	cout << "\nGrand Patrons:\n";
	bool are_here = false;
	for (int k = 0; k < i; k++)
		if (people[k].donation >= GRAND)
		{
			are_here = true;
			cout << people[k].fullname << "\t"
				 << people[k].donation << endl;
		}
	if (!are_here)
		cout << "none\n";

	// 2nd
	cout << "\nPatrons:\n";
	are_here = false;
	for (int k = 0; k < i; k++)
		if (people[k].donation < GRAND)
		{
			are_here = true;
			cout << people[k].fullname << "\t"
				 << people[k].donation << endl;
		}
	if (!are_here)
		cout << "none\n";

	return 0;
}
