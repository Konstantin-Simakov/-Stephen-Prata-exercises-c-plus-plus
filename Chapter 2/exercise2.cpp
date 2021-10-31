// exercise2.cpp -- Chapter 2
#include <iostream>
using namespace std;

int main(void)
{
	int furlongs;
	cout << "Enter the distance, in furlongs: ";
	cin >> furlongs;
	
	int yards = furlongs * 220;
	cout << furlongs << " furlongs equals " 
		 << yards << " yards." << endl;
		
	return 0;
}
