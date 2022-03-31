// exercise6.cpp -- Chapter 7
#include <iostream>

int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);
void reverse_array(double arr[], int n);

int main(void)
{
	using namespace std;
	const int ARSIZE = 10;					// you may put another number here
	double arr[ARSIZE];
	
	cout << "Enter up to " << ARSIZE << " array elements:\n";
	int size = fill_array(arr, ARSIZE);		// size is a fact number of array elements

	cout << "Output " << size << " array elements:\n";
	show_array(arr, size);

	// Replacing all elements of an array, except for the first n elements 
	// and the last k elements in general case (see one commented code line below...):
	// reverse_array(arr + k, (size - k) - n);
	reverse_array(arr + 1, (size - 1) - 1);	// reverse all array elements besides first and last
	cout << "Reverse array elements:\n";
	show_array(arr, size);

	return 0;
}

int fill_array(double arr[], int limit)
{	
	using namespace std;
	int num = 0;
	while (num < limit && cin >> arr[num])
		num++;

	return num;
}

void show_array(const double arr[], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << i + 1 << ": " << arr[i] << endl;
}

void reverse_array(double arr[], int n)
{
	double temp;
	for (int i = 0; i < n / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[(n - 1) - i];
		arr[(n - 1) - i] = temp;
	}
}
