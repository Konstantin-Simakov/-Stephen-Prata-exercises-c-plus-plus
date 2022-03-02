// exercise3.cpp -- Chapter 6
#include <iostream>
#include <cstring>				// for strchr()
using std::cin;
using std::cout;

void show_menu(void);
void error(void);
void carnivore(void);
void pianist(void);
void tree(void);
void game(void);

int main(void)
{
	show_menu();
	char choice;
	while (cin >> choice && choice != 'q')
	{
		switch (choice)
		{
			case 'c': carnivore();
				break;
			case 'p': pianist();
				break;
			case 't': tree();
				break;
			case 'g': game();
				break;
			default: error();
		}
	}
	cout << "Done!\n";

	return 0;
}

void show_menu(void)
{
	cout << "Please enter one of the following choices:\n"
		 << "c) carnivore     p) pianist\n"
		 << "t) tree          g) game\n"
		 << "q) quit\n";
}

void error(void)
{
	cout << "Please enter c, p, t, g, or q: ";
}

void carnivore(void)
{
	cout << "A carnivore could be dangerous.\n";
}

void pianist(void)
{
	cout << "A pianist is who play on piano.\n";
}

void tree(void)
{
	cout << "A maple is a tree.\n";
}

void game(void)
{
	cout << "Tic-tac-toe is a game.\n";
}
