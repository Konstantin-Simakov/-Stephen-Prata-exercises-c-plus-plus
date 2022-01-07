// exercise1_version2.cpp -- Chapter 4
#include <iostream>

struct Man_info {
	std::string fname;
	std::string lname;
	char grade;
	int age;
};

int main(void)
{
	using namespace std;
	Man_info person;

	cout << "What is your first name? ";
	getline(cin, person.fname);
	cout << "What is your last name? ";
	getline(cin, person.lname);
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

