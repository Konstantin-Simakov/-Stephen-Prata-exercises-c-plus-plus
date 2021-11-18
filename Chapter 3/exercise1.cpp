// exercise1.cpp -- Chapter 3
#include <iostream>

int main(void)
{
	using namespace std;
	const int INCHES_PER_FOOT = 12;
	int feet, r_inches, inches;

	cout << "Enter inches: ";
	cin >> inches;

	feet = inches / INCHES_PER_FOOT;
	r_inches = inches % INCHES_PER_FOOT;
	
	cout << inches << " inches = ";
	cout << feet << " feet, "
		 << r_inches << " inches." << endl;
		
	return 0;
}
