// exercise.cpp -- Chapter 3
#include <iostream>

int main(void)
{
	using namespace std;
	float miles, gallons;

	cout << "Enter the number of miles travelled: ";
	cin >> miles;
	cout << "Enter the number of gallons of gasoline consumed: ";
	cin >> gallons;

	cout << "The number of miles per gallon is " << miles / gallons << endl;
	cout << "Bye!\n";

	return 0;
}
