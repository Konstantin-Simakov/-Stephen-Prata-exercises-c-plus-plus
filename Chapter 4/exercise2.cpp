// exercise2.cpp -- Chapter 4
#include <iostream>
#include <string>	// for using objects of string class 

int main(void)
{
	using namespace std;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favourite desert:\n";
	getline(cin, dessert);

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
