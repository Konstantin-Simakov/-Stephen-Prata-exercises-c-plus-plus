// exercise9.cpp -- Chapter 6;
// 				    use the file "patrons.txt" for file input
#include <iostream>
#include <fstream>			// for ifstream class objects
#include <cstring>			// for strcmp()
#include <cstdlib>			// for exit(), EXIT_FAILURE

const int SIZE = 50;

struct patron {
	char fullname[SIZE];
	double donation;
};

int main(void)
{
	using namespace std;
	const int STRSIZE = 50;
	char filename[STRSIZE];
	ifstream fin;			// ifstream class object declaration

	cout << "Enter the filename to read:\n";
	cin.getline(filename, STRSIZE);
	fin.open(filename);
	if (!fin.is_open())
	{
		cout << "Couldn't open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	// data input from the text file
	int num;
	(fin >> num).get();
	patron * people = new patron [num];
	int i;
	for (i = 0; i < num; i++)
	{
		fin.getline(people[i].fullname, SIZE);
		if (!strcmp(people[i].fullname, "q"))
			break;

		fin >> people[i].donation;
		if (fin.fail())		// AND if (fin.eof())
			break;
		else
			while (fin.get() != '\n')
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
