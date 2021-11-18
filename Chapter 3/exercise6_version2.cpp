// exercise6_version2.cpp -- Chapter 3
#include <iostream>

int main(void)
{
	using namespace std;
	float km, liters;

	cout << "Enter the number of kilometers travelled: ";
	cin >> km;
	cout << "Now enter the number of liters of gasoline consumed: ";
	cin >> liters;
	
	cout << "The number of liters per 100 kilometers is "
		 << (liters / km) * 100 << endl;
	cout << "Bye!\n";
		
	return 0;
}
