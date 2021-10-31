// exercise5.cpp -- Chapter 2
#include <iostream>
using namespace std;

double cels_to_fahr(double cels);

int main(void)
{
	double celsius;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;

	cout << celsius << " Celsius is " << cels_to_fahr(celsius)
		 << " degrees Fahrenheit." << endl;
		
	return 0;
}

double cels_to_fahr(double celsius)
{
	return 1.8 * celsius + 32;
}
