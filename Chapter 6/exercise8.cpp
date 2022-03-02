// exercise8.cpp -- Chapter 6;
// 				    use the file "text.txt" for file input
#include <iostream>
#include <fstream>
#include <cstdlib>			// for exit(), EXIT_FAILURE

int main(void)
{
	using namespace std;
	const int STRSIZE = 50;
	char filename[STRSIZE];
	ifstream fin;			// ifstream class object declaration
	
	cout << "Enter the filename to read:\n";
	cin.getline(filename, STRSIZE);
	fin.open(filename);
	if (!fin.is_open())		// if file opening is not success
	{
		cout << "Couldn't open the file \"" << filename << "\".\n";
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	char temp;
	int count = 0;			// the number of all characters in the file
	while (fin.get(temp))
		count++;
	fin.close();
	
	cout << count << " characters in the file \"" << filename << "\".\n";

	return 0;
}
