// exercise3.cpp -- Chapter 3
#include <iostream>

int main(void)
{
	using namespace std;
	const int MINS_PER_DEGREE = 60;
	const int SECS_PER_MIN = 60;
	int degrees, minutes, seconds;
	double res_d;		// the resulting number of degrees

	// data input
	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	// data processing and output
	res_d = degrees + (double (minutes) / MINS_PER_DEGREE) + 
			(double (seconds) / (MINS_PER_DEGREE * SECS_PER_MIN));
	cout << degrees << " degrees, ";
	cout << minutes << " minutes, ";
	cout << seconds << "seconds = ";
	cout << res_d << " degrees\n";
		
	return 0;
}
