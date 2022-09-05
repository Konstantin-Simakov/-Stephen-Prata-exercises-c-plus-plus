// exercise9.cpp -- Chapter 4

// It is the safe and fast version of the program 
// due to using strncpy() function.

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
	Candy_bar * sweets = new Candy_bar[3];
	
	strncpy(sweets[0].name, "Mocha Munch", 29);	// it is the example of using strncpy()  
	sweets[0].name[29] = '\0';					// from header file of C string processing
	sweets[0].weight = 2.3f;
	sweets[0].calories = 350;

	strncpy(sweets[1].name, "Bounty", 29);
	sweets[1].name[29] = '\0';
	sweets[1].weight = 2.1f;
	sweets[1].calories = 455;

	strncpy(sweets[2].name, "Snickers", 29);
	sweets[2].name[29] = '\0';
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
