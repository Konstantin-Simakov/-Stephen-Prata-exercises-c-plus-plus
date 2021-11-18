// exercise5.cpp -- Chapter 3
// the percentage of the population of 
// any country and the entire world
#include <iostream>

int main(void)
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
// the world population are 8 billions, 
// constant value for the program
	const long long WRLD_POP = 8000000000LL;
// population of your country, input data
	double my_pop;

	cout << "The world population = " << WRLD_POP << " people.\n";
	cout << "Enter the population of your country: ";
	cin >> my_pop;
	cout << "The population of your country is "
// calculation part of the program 
		 << my_pop / WRLD_POP * 100
		 << "% of the world population.\n";

	return 0;
}
