// exercise3.cpp -- Chapter 2
#include <iostream>
using namespace std;

void msg1(void);
void msg2(void);

int main(void)
{
	msg1();
	msg1();
	msg2();
	msg2();
		
	return 0;
}

void msg1(void)
{
	cout << "Three blind mice" << endl;
}

void msg2(void)
{
	cout << "See how they run" << endl;
}
