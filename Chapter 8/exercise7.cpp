// exercise7.cpp -- Chapter 8
#include <iostream>

template <typename T>
T sum_array(T arr[], int n);			// Template A
template <typename T>
T sum_array(T * arr[], int n);			// Template B

struct debts {
	char name[50];
	double amount;
};

int main(void)
{
	using namespace std;
	const int SIZE_1 = 6;
	const int SIZE_2 = 3;
	int things[SIZE_1] = {13, 31, 103, 301, 310, 130};
	debts mr_e[SIZE_2] = {
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[SIZE_2];

	// Setting pointers to members amount of structure type variables in the array mr_e
	for (int i = 0; i < SIZE_2; i++)
		pd[i] = &mr_e[i].amount;

	cout << "Mr. E\'s total things: ";
	// things is the array of int values
	cout << sum_array(things, SIZE_1) << endl;		// Uses template A

	cout << "Mr. E\'s total debts: ";
	// pd is the array of pointers to double
	cout << sum_array(pd, SIZE_2) << endl;			// Uses template B (more specialized)

	return 0;
}

template <typename T>
T sum_array(T arr[], int n)
{
	T sum = 0;

	for (int i = 0; i < n; i++)
		sum += arr[i];

	return sum;
}

template <typename T>
T sum_array(T * arr[], int n)
{
	T sum = 0;

	for (int i = 0; i < n; i++)
		sum += *arr[i];

	return sum;
}
