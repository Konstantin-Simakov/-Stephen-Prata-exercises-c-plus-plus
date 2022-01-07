// exercise8.cpp -- Chapter 4
#include <iostream>

struct Pizza {
	char pizzeria_name[30];
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
	cin.getline(p_pizza->pizzeria_name, 30);
	cout << "Enter a pizza weight: ";
	cin >> p_pizza->weight;

	// It's output of data.
	cout << "The pizza that you've ordered has following parameters:\n";
	cout << "Pizza diameter:  " << p_pizza->diameter << endl;
	cout << "Pizzeria name:   " << p_pizza->pizzeria_name << endl;
	cout << "Pizza weight:    " << p_pizza->weight << endl;

	return 0;
}
