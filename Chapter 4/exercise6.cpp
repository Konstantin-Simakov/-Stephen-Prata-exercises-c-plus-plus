// exercise6.cpp -- Chapter 4
#include <iostream>

struct Candy_bar {
	char name[30];
	float weight;
	int calories;
};

int main(void)
{
	using namespace std;
	Candy_bar sweets[3] = {
		{"Mocha Munch", 2.3, 350}, 
		{"Bounty", 	 	2.1, 455}, 
		{"Snickers", 	3.1, 700} 
	};

	// outputting the contents of the array as a table
	cout << "Candy name  	Candy weight  	     Candy calories\n";
	cout << "---------------------------------------------------\n";
	cout << sweets[0].name << "\t    " << sweets[0].weight << "\t\t\t   "
		 << sweets[0].calories << endl;
	cout << sweets[1].name << "\t\t    " << sweets[1].weight << "\t\t\t   "
		 << sweets[1].calories << endl;
	cout << sweets[2].name << "\t    " << sweets[2].weight << "\t\t\t   "
		 << sweets[2].calories << endl;

	return 0;
}
