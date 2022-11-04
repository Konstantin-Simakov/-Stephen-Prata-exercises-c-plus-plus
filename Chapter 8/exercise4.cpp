// exercise4.cpp -- Chapter 8
#include <iostream>
#include <cstring>			// For strlen(), strcpy()

struct stringy {
	char * str;				// Points to a string
	int ct;					// String length
};

void set(stringy & s1, const char * s2);
void del(stringy & s1);
void show(const stringy & s1, int times = 1);
void show(const char * s2, int times = 1);

int main(void)
{
	stringy beany;
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

void set(stringy & s1, const char * s2)
{
	s1.ct = strlen(s2);
	s1.str = new char[s1.ct + 1];
	strcpy(s1.str, s2);
}

void del(stringy & s1)
{
	delete [] s1.str;
}

void show(const stringy & s1, int times)
{
	for (int i = 0; i < times; i++)
		std::cout << s1.str << std::endl;
}

void show(const char * s2, int times)
{
	for (int i = 0; i < times; i++)
		std::cout << s2 << std::endl;
}
