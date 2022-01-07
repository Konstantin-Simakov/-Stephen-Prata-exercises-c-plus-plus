// exercise4.cpp -- Chapter 4
#include <iostream>
#include <string>


struct Fullname {
	std::string fname;
	std::string lname;
};

int main(void)
{
	using namespace std;
	using std::cin;
	using std::cout;	// just checking

	Fullname person;
	std::cout << "Enter your first name: ";
	getline(std::cin, person.fname);
	cout << "Enter your last name: ";
	getline(cin, person.lname);

	std::string res_str;
	res_str = person.lname + ", " + person.fname;		// it's very convinient
	// the size of res_str equals zero at the beginning
	cout << "Here's the infromation in a single string: "
		 << res_str << endl;

	return 0;
}
