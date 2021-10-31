// exercise6.cpp -- Chapter 2
#include <iostream>
using namespace std;

double light_years_to_astro_uints(double l_years);

int main(void)
{
	double l_years;
	cout << "Enter the numbere of light years: ";
	cin >> l_years;

	cout << l_years << " light years = "
		 << light_years_to_astro_uints(l_years)
		 << " astronomical units." << endl;
		
	return 0;
}

double light_years_to_astro_uints(double l_years)
{
	return l_years * 63240;
}
