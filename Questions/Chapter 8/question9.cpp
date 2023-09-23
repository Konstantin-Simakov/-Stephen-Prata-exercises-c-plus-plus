// question9.cpp -- Chapter 8
#include <iostream>

int g(int);

int main(void)
{
	using namespace std;
	float m = 5.5f;
	float & rm = m;
	decltype(m) v1 = m;
	decltype(rm) v2 = m;
	decltype((m)) v3 = m;
	decltype(g(100)) v4 = 100;
	decltype(2.0 * m) v5 = 10.1;

	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;
	cout << "v3 = " << v3 << endl;
	cout << "v4 = " << v4 << endl;
	cout << "v5 = " << v5 << endl;
	cout << endl;

/*	cout << "sizeof v1 = " << sizeof v1 << endl;
	cout << "sizeof v2 = " << sizeof v2 << endl;
	cout << "sizeof v3 = " << sizeof v3 << endl;
	cout << "sizeof v4 = " << sizeof v4 << endl;
	cout << "sizeof v5 = " << sizeof v5 << endl;
*/
	return 0;
}
