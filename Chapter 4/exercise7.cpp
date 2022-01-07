// exercise7.cpp -- Chapter 4
#include <iostream>

struct Pizza {
	char pizzeria_name[30];
	float diameter;
	float weight;
};

int main(void)
{
	using namespace std;
	Pizza four_seasons;

	// It's input of data.
	cout << "Enter a pizzeria name: ";
	cin.getline(four_seasons.pizzeria_name, 30);
	cout << "Enter a pizza diameter: ";
	cin >> four_seasons.diameter;
	cout << "Enter a pizza weight: ";
	cin >> four_seasons.weight;

	// It's output of data.
	cout << "The pizza that you've ordered has following parameters:\n";
	cout << "Pizzeria name:   " << four_seasons.pizzeria_name << endl;
	cout << "Pizza diameter:  " << four_seasons.diameter << endl;
	cout << "Pizza weight:    " << four_seasons.weight << endl;

	return 0;
}
