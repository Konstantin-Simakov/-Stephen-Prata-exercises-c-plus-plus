// exercise5.cpp -- Chapter 4
#include <iostream>

struct Candy_bar {
	char name[30];
	float weight;
	int calories;
};

int main(void)
{
	using namespace std;
	Candy_bar snack = {"Mocha Munch", 2.3, 350};

	cout << "Candy name: "<< snack.name << endl;
	cout << "Candy weight: " << snack.weight << endl;
	cout << "Candy calories: " << snack.calories << endl;

	return 0;
}
