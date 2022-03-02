// exercise4.cpp -- Chapter 6
#include <iostream>
using namespace std;

const int STRSIZE = 40;
// the structure of benevolent order of programmers (BOP)
struct bop {
	char fullname[STRSIZE];			// real name
	char title[STRSIZE];			// position
	char bopname[STRSIZE];			// secret name BOP
	int preference;					// 0 = fulname, 1 = title, 2 = BOP name
};

void show_menu(void);

int main(void)
{
	const int ARSIZE = 3;
	bop staff[ARSIZE] = {
		{ "Wimp Macho", 	"junior", 	"Junior Programmer", 	0 },
		{ "Raki Rhodes", 	"middle", 	"MIPS", 				1 },
		{ "Hoppy Hattman", 	"senior", 	"Loopy", 				2 }
	};

	show_menu();
	cout << "Enter your choice: ";
	char choice;
	int i;
	while (cin >> choice && choice != 'q')
	{
		switch (choice)
		{
			case 'a': 
				for (i = 0; i < ARSIZE; i++)
					cout << staff[i].fullname << endl;
				break;
			case 'b': 
				for (i = 0; i < ARSIZE; i++)
					cout << staff[i].title << endl;
				break;
			case 'c': 
				for (i = 0; i < ARSIZE; i++)
					cout << staff[i].bopname << endl;
				break;
			case 'd': 
				for (i = 0; i < ARSIZE; i++)
				{
					if (0 == staff[i].preference)
						cout << staff[i].fullname << endl;
					else if (1 == staff[i].preference)
						cout << staff[i].title << endl;
					else
						cout << staff[i].bopname << endl;
				}
				break;
			default: cout << "That's not a choice!\n";
		}
		cout << "Next choice: ";
	}
	cout << "Bye!\n";

	return 0;
}


void show_menu(void)
{
	cout << "Benevolent Order of Programmers Report\n";
	cout << "a. display by name       b. display by title\n"
		 << "c. display by bopname    d. display by preference\n"
		 << "q. quit\n";
}
