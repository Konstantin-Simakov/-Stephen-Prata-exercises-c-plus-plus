// exercise7.cpp -- Chapter 3
#include <iostream>

int main(void)
{
	using namespace std;
	const float KM_PER_MILE = 1.60934f;
	const float LTRS_PER_GLN = 3.875f;
	float lpk;		// the number of liters per 100 km
	float mpg;		// the number of miles per gallon
	
	cout << "Enter the fuel consumption in eropean style (ltrs / 100 km): ";
	cin >> lpk;

	mpg = 100 * LTRS_PER_GLN / (lpk * KM_PER_MILE);

	cout << lpk << " liters per 100 km = ";
	cout << mpg << " miles per gallon.\n";
	cout << "\t\tBye!\n";

	return 0;
}
