// exercise7.cpp -- Chapter 2
#include <iostream>
using namespace std;

void time(int, int);

int main(void)
{
	int hours;
	cout << "Enter the number of hours: ";
	cin >> hours;
	
	int minutes;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	
	time(hours, minutes);
	
	return 0;
}

void time(int hours, int mins)
{
	cout << "Time: " << hours << ":" << mins << endl;
}
