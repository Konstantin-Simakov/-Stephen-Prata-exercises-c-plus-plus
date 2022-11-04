// exercise5.cpp -- Chapter 8
#include <iostream>

const int SIZE = 5;				// The hard-coded number of array elements

template <typename T>
T max5(T arr[]);

int main(void)
{
	using namespace std;
	int arr1[SIZE] = {1, 2, 3, 4, 5};
	double arr2[SIZE] = {1.0, 2.0, 3.0, 4.0, 5.0};

	cout << "The biggest element in the array of int is " 
		 << max5(arr1) << endl;
	cout << "The biggest element in the array of double is " 
		 << max5(arr2) << endl;

	return 0;
}

template <typename T>
T max5(T arr[])
{
	T max = arr[0];
	
	for (int i = 1; i < SIZE; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	return max;
}
