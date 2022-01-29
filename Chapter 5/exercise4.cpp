// exercise4.cpp -- Chapter 5
#include <iostream>

int main(void)
{
	using namespace std;
	const int SRC_BLNC = 100;
	double s_kleo = SRC_BLNC;
	double s_daphna = SRC_BLNC;
	int years = 0;

	cout << "Years\tKleo\t\tDaphna\n";
	cout << years << "\t" << s_kleo << "\t\t" << s_daphna << endl;
	while (s_kleo <= s_daphna)
	{
		s_kleo += 0.05 * s_kleo;
		s_daphna += 0.1 * SRC_BLNC;
		years++;

		cout << years << "\t" << s_kleo << "\t\t" << s_daphna << endl;
	}
	cout << "So, it'll take " << years << " years.\n";

	return 0;
}
