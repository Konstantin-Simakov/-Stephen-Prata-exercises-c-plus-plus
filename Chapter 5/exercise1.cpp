// exercise1.cpp -- Chapter 5
#include <iostream>

int main(void)
{
	using namespace std;
	// Entering
	cout << "Enter begin and end numbers: ";
	int begin, end;
	cin >> begin >> end;

	// Calculating
	int sum = 0;
	for (int num = begin; num <= end; num++)
		sum += num;
	cout << "The sum of all inetegers between "
		 << begin << " and " << end
		 << " equals " << sum << endl;

	return 0;
}
