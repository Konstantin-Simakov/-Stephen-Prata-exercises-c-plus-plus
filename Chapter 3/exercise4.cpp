// exercise4.cpp -- Chapter 3
#include <iostream>

int main(void)
{
	using namespace std;
	const int HOURS_PER_DAY = 24;
	const int MINS_PER_HOUR = 60;
	const int SECS_PER_MIN = 60;
	long long seconds;					// data input
	int days, hours, minutes, remain;	// data output
										// remain is the remain number of seconds

// data input
	cout << "Enter the number of seconds: ";
	cin >> seconds;

// data processing
	days = seconds / (SECS_PER_MIN * MINS_PER_HOUR * HOURS_PER_DAY);
	// update remain number of seconds
	remain = seconds % (SECS_PER_MIN * MINS_PER_HOUR * HOURS_PER_DAY);
	hours = remain / (SECS_PER_MIN * MINS_PER_HOUR);
	// update remain number of seconds
	remain = remain % (SECS_PER_MIN * MINS_PER_HOUR);
	minutes = remain / SECS_PER_MIN;
	// update remain number of seconds; equals resulting number of seconds
	remain = remain % SECS_PER_MIN;

// data output
	cout << seconds << " seconds = ";
	cout << days << " days, ";
	cout << hours << " hours, ";
	cout << minutes << " minutes, ";
	cout << remain << " seconds.\n";

	return 0;
}
