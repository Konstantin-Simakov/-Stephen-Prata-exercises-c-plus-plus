// exercise10.cpp -- Chapter 4
#include <iostream>
#include <array>

int main(void)
{
	using namespace std;
	const int SIZE = 3;
	array<float, SIZE> races;

	cout << "Enter " << SIZE << " race results (floating): ";
	cin >> races[0] >> races[1] >> races[2];
	
	cout << "Race results: "
		 << races[0] << " "
		 << races[1] << " "
		 << races[2] << endl;
	cout << "Average:      " 
		 << (races[0] + races[1] + races[2]) / 3.0f 
		 << endl;

	return 0;
}
