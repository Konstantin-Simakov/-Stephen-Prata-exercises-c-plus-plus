// exercise9.cpp -- Chapter 4

// It is the safe, not so fast but easier in application version
// of the program due to using objects of std::string class.

#include <iostream>
#include <string>		// for std::string class using

struct Candy_bar {
	std::string name;	// firstly, the size of name equals 0...
	float weight;		// then, it will be increased as the program continues
	int calories;
};

int main(void)
{
	using namespace std;
	Candy_bar * sweets = new Candy_bar[3];
	
	sweets[0].name = "Mocha Munch";
	sweets[0].weight = 2.3f;
	sweets[0].calories = 350;

	sweets[1].name = "Bounty";
	sweets[1].weight = 2.1f;
	sweets[1].calories = 455;

	sweets[2].name = "Snickers";
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
