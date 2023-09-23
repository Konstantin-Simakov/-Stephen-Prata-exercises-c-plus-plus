// question6.cpp -- Chapter 8
#include <iostream>

double mass(double density, double volume = 1.0);
// double mass(double density);							// It will be ambigouos call of function mass().
void repeat(int num, const std::string & str);
void repeat(const char * str);
template <typename T>
T average(T a, T b);
double average(double a, double b);
int average(int a, int b);
char mangle(const std::string & str);
char * mangle(const char * str);

int main(void)
{
	using namespace std;
	double density = 5.0;
	double volume = 6.0;

	mass(density);

	repeat(10, "I\'m OK.");
	repeat("But you\'re kind of stupid.");

	cout << "Average of 3 and 6 is " << average(3, 6) << endl;
	cout << "Average of 3L and 6L is " << average(3L, 6L) << endl;
	cout << "Average of 3.0 and 6.0 is " << average(3.0, 6.0) << endl;

	cout << mangle("I\'m glad to meet you.") << endl; 
	std::string str = "I\'m glad to meet you.";			// Only so.
	cout << mangle(str) << endl; 

	return 0;
}

// a.
double mass(double density, double volume)
{
	return density * volume;
}

// b.
void repeat(int num, const std::string & str)
{
	for (int i = 0; i < num; i++)
		std::cout << str << std::endl;
}

void repeat(const char * str)
{
	for (int i = 0; i < 5; i++)
		std::cout << str << std::endl;
}

// c.
template <typename T>
T average(T a, T b)
{
	return (a + b) / 2;
}

double average(double a, double b)
{
	return (a + b) / 2;
}

int average(int a, int b)
{
	return (a + b) / 2;
}

// d.
char mangle(const std::string & str)
{
	return str[0];
}

char * mangle(const char * str)
{
	return (char *) str;
}
