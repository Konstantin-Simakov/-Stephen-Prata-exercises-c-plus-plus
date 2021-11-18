// exercise2.cpp -- Chapter 3
#include <iostream>

int main(void)
{
	using namespace std;
	const int INCHES_PER_FOOT = 12;
	const float METERS_PER_INCH = 0.0254f;
	const float KGS_PER_LB = 2.2f;
	int inches, feet, lbs;					// data input
	int weght, height;						// data processing
	int bmi;								// BMI (body mass inidex), data output

	cout << "Enter your height in feet and inches:\n";
	cin >> feet;
	cin >> inches;
	cout << "Enter your weght in lbs: ";
	cin >> lbs;

	height = feet * INCHES_PER_FOOT + inches;		// height in inches
	height = height * METERS_PER_INCH;				// height in meters
	weght = lbs / KGS_PER_LB;						// weght in kilograms
	bmi = weght / (height * height);

	cout << "Your BMI = " << bmi << endl;
	cout << "Bye!\n";

	return 0;
}
