// question7.cpp -- Chapter 8
#include <iostream>

template <typename T>
T larger(T a, T b);
// Or:
// template <typename T>
// T larger(const T & a, const T & b);

int main(void)
{
	using namespace std;
	cout << "Enter the first number: ";
	float num1;
	cin >> num1;

	cout << "Enter the second number: ";
	float num2;
	cin >> num2;

	cout << "The larger from " << num1 << " and " << num2
		 << " is " << larger(num1, num2) << endl;

	return 0;
}

template <typename T>
T larger(T a, T b)
{
	return a > b ? a : b;
}

/*
template <typename T>
T larger(const T & a, const T & b)
{
	return a > b ? a : b;
}
*/
