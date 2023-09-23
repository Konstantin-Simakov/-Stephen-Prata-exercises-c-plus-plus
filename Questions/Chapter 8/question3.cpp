// question3.cpp -- Chapter 8
#include <iostream>

void iquote(int);
void iquote(double);
void iquote(std::string);

int main(void)
{
	int num1 = 10;
	double num2 = 15.05;
	std::string str = "My string.";

	iquote(num1);
	iquote(num2);
	iquote(str);

	return 0;
}

void iquote(int n) 
{ 
	std::cout << '\"' << n << '\"' << std::endl;
}

void iquote(double n) 
{ 
	std::cout << '\"' << n << '\"' << std::endl;
}

void iquote(std::string s)
{
	std::cout << '\"' << s << '\"' << std::endl;
}
