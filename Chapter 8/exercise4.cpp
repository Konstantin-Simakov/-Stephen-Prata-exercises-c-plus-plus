// exercise4.cpp -- Chapter 8
#include <iostream>
#include <cstring>			// For strlen(), strcpy()

struct Stringy {
	char * str;				// Points to a string
	int ct;					// String length
};

void set(Stringy & s1, const char * s2);
void del(Stringy & s1);
void show(const Stringy & s1, int times = 1);
void show(const char * s2, int times = 1);

int main(void)
{
	Stringy beany;
	char testing[] = "Reality isn\'t what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	del(beany);

	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");			// == show("Done!", 1);

	return 0;
}

void set(Stringy & s1, const char * s2)
{
	s1.ct = strlen(s2);
	s1.str = new char[s1.ct + 1];
	strcpy(s1.str, s2);
}

void del(Stringy & s1)
{
	delete [] s1.str;
}

void show(const Stringy & s1, int times)
{
	for (int i = 0; i < times; i++)
		std::cout << s1.str << std::endl;
}

void show(const char * s2, int times)
{
	for (int i = 0; i < times; i++)
		std::cout << s2 << std::endl;
}
