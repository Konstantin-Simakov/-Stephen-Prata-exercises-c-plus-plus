// exercise10_a.cpp -- Chapter 7
#include <iostream>

double add(double, double);
double subtract(double, double);
double calculate(double, double, double (*)(double, double));

int main(void)
{
	using namespace std;
	double a, b;

	cout << "Enter two numbers (or q to quit): ";
	while (cin >> a >> b)
	{
		cout << a << " + " << b << " = " << calculate(a, b, add) << endl;
		cout << a << " - " << b << " = " << calculate(a, b, subtract) << endl;

		cout << "Enter the next two numbers (or q to quit): ";
	}
	cout << "Bye!\n";

	return 0;
}

double calculate(double x, double y, double (* pf)(double, double))
{
	return (*pf)(x, y);
}

double add(double x, double y)
{
	return x + y;
}

double subtract(double x, double y)
{
	return x - y;
}
