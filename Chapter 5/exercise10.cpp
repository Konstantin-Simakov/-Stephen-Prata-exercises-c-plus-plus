// exercise10.cpp -- Chapter 5
#include <iostream>

int main(void)
{
	using namespace std;
	cout << "Enter the number of strings: ";
	int num;
	cin >> num;

	int i, j;
	for (i = 1; i <= num; i++)
	{
		for (j = num - i; j >= 1; j--)
			cout << '.';
		for (j = i; j >= 1; j--)
			cout << '*';
		cout << endl;
	}

	return 0;
}
