// question2.cpp -- Chapter 8
#include <iostream>
using namespace std;

void song(const char * name = "O, my Papa", int times = 1);

int main(void)
{
	song();  // song("O, my Papa", 1);
	song("Hello, world!");
	song("What\'s your name?", 2);

	return 0;
}

void song(const char * name, int times)
{
	for (int i = 0; i < times; i++)
		cout << name << endl;
}
