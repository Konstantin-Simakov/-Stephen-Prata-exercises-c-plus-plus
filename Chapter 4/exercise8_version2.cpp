// exercise8_version2.cpp -- Chapter 4
#include <iostream>
#include <string>

struct Pizza {
	std::string pizzeria_name;
	float diameter;
	float weight;
};

int main(void)
{
	using namespace std;
	Pizza * p_pizza = new Pizza;

	// It's input of data.
	cout << "Enter a pizza diameter: ";
	(cin >> p_pizza->diameter).get();
	cout << "Enter a pizzeria name: ";
	getline(cin, p_pizza->pizzeria_name);
	cout << "Enter a pizza weight: ";
	cin >> p_pizza->weight;

	// It's output of data.
	cout << "The pizza that you've ordered has following parameters:\n";
	cout << "Pizza diameter:  " << p_pizza->diameter << endl;
	cout << "Pizzeria name:   " << p_pizza->pizzeria_name << endl;
	cout << "Pizza weight:    " << p_pizza->weight << endl;

	return 0;
}
