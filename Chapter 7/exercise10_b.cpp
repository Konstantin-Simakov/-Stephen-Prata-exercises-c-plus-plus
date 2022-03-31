// exercise10_b.cpp -- Chapter 7
#include <iostream>

double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);
double calculate(double, double, double (*)(double, double));
void display(double, double, double (*[])(double, double), int);

int main(void)
{
	using namespace std;
	const int SIZE = 4;
	// array of function pointers -- arr
	double (* arr[SIZE])(double, double) = { add, subtract, multiply, divide };

	double a, b;
	cout << "Enter two numbers (or q to quit): ";
	while (cin >> a >> b)
	{
		display(a, b, arr, SIZE);
		cout << "Enter the next two numbers (or q to quit): ";
	}
	cout << "Bye!\n";

	return 0;
}

// Or: void display(double x, double y, double (** ppf)(double, double), int n)
void display(double x, double y, double (* ppf[])(double, double), int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		if (add == ppf[i])
			cout << x << " + " << y << " = ";
		else if (subtract == ppf[i])
			cout << x << " - " << y << " = ";
		else if (multiply == ppf[i])
			cout << x << " * " << y << " = ";
		else if (divide == ppf[i])
			cout << x << " / " << y << " = ";
		else
			cout << "Incorrect address of function is given.\n";
		cout << calculate(x, y, ppf[i]) << endl;
	}
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

double multiply(double x, double y)
{
	return x * y;
}

double divide(double x, double y)
{
	return x / y;
}
