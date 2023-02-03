// exercise4_support.cpp -- Chapter 9
// Compile along with exercise4.cpp

#include <iostream>
#include "exercise4.h"

namespace SALES
{
	// Static function prototypes
	static double min(const double arr[], int n);
	static double max(const double arr[], int n);

	void set_sales(Sales & s, const double arr[], int n)
	{
		double total = 0.0;
		for (int i = 0; i < n; i++)
		{
			total += arr[i];
			s.sales[i] = arr[i];
		}
		s.average = total / n;
		
		s.min = min(arr, n);
		s.max = max(arr, n);
	}

	void set_sales(Sales & s)
	{
		using std::cout;
		using std::cin;
		cout << "Enter " << QUARTERS << " sales for every quartor accordingly.\n";
		
		double total = 0.0;
		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "#" << i + 1 << ": ";
			while (!(cin >> s.sales[i]))
			{
				cout << "Incorrect input. Only integer: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			total += s.sales[i];
		}
		s.average = total / QUARTERS;

		s.min = min(s.sales, QUARTERS);
		s.max = max(s.sales, QUARTERS);
	}

	void show_sales(const Sales & s)
	{
		using std::cout;
		using std::endl;

		cout << "Sales: ";
		for (int i = 0; i < QUARTERS; i++)
			cout << s.sales[i] << " ";
		cout << endl;

		cout << "Average: " << s.average << endl;
		cout << "Max sale: " << s.max << endl;
		cout << "Min sale: " << s.min << endl;
	}


	// Static function definitions (only for this source file)

	static double min(const double arr[], int n)
	{
		double m = arr[0];
		for (int i = 1; i < n; i++)
			if (m > arr[i])
				m = arr[i];

		return m;
	}

	static double max(const double arr[], int n)
	{
		double m = arr[0];
		for (int i = 1; i < n; i++)
			if (m < arr[i])
				m = arr[i];

		return m;
	}
}
