// exercise1.cpp -- Chapter 4
#include <iostream>

struct Man_info {
	char fname[20];
	char lname[20];
	char grade;
	int age;
};

int main(void)
{
	using namespace std;
	Man_info person;

	cout << "What is your first name? ";
	cin.get(person.fname, 20).get();		// the 2nd get() calling is needed to discard '\n' in the end of an input line
	cout << "What is your last name? ";
	cin.getline(person.lname, 20);
	cout << "What letter grade do you deserve? ";
	cin >> person.grade;
	cout << "How old are you? ";
	cin >> person.age;

	cout << "Name: " << person.lname
		 << ", " << person.fname << endl;
	cout << "Grade: " << char (person.grade + 1) << endl;
	cout << "Age: " << person.age << endl;


	return 0;
}

