// exercise9_version3.cpp -- Chapter 4

// It's not the safe fast version of the program 
// due to using strcpy() function,
// but this program is fast because it uses strcpy() function.

#include <iostream>
#include <cstring>		// for strncpy()

struct Candy_bar {
	char name[30];
	float weight;
	int calories;
};

int main(void)
{
	using namespace std;
	Candy_bar * sweets = new Candy_bar [3];
	
	// It's the example of using strcpy() function
	// for C-string (char array) processing.
	strcpy(sweets[0].name, "Mocha Munch");
	sweets[0].weight = 2.3f;				
	sweets[0].calories = 350;

	strcpy(sweets[1].name, "Bounty");
	sweets[1].weight = 2.1f;
	sweets[1].calories = 455;

	strcpy(sweets[2].name, "Snickers");
	sweets[2].weight = 3.1f;
	sweets[2].calories = 700;

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
