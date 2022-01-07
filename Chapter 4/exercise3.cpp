// exercise3.cpp -- Chapter 4
#include <iostream>
#include <cstring>

struct Fullname {
	char fname[20];
	char lname[20];
};

int main(void)
{
	using namespace std;
	Fullname person;
	char res_str[(20 - 1) + (2 - 1) + 20];	// the size of res_str = 40
	
	cout << "Enter your first name: ";
	cin.getline(person.fname, 20);
	cout << "Enter your last name: ";
	cin.getline(person.lname, 20);

	strcpy(res_str, person.lname);
	strcat(res_str, ", ");
	strcat(res_str, person.fname);
	cout << "Here's the information in a single string: "
		 << res_str << endl;

	return 0;
}
