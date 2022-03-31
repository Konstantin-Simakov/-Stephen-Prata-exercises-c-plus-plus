// exercise9.cpp -- Chapter 7
#include <iostream>
using namespace std;

const int SLEN = 30;

struct student {
	char full_name[SLEN];
	char hobby[SLEN];
	int oop_level;
};

int get_info(student pa[], int n);
void display_1(student st);
void display_2(const student * ps);
void display_3(const student pa[], int n);

int main(void)
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student [class_size];

	int entered = get_info(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display_1(ptr_stu[i]);
		display_2(&ptr_stu[i]);
	}
	display_3(ptr_stu, entered);
	
	delete [] ptr_stu;
	cout << "Done\n";

	return 0;
}

int get_info(student pa[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		cout << "Enter student's full name (or empty line to finish): ";
		if (!cin.getline(pa[i].full_name, SLEN) || 
			'\0' == pa[i].full_name[0])
		{
			cout << "Bad input; Input terminating\n";
			break;
		}

		cout << "Enter the student's hobby (or emtpy line to finish): ";
		if (!cin.getline(pa[i].hobby, SLEN) ||
			'\0' == pa[i].hobby[0])
		{
			cout << "Bad input; Input terminating\n";
			break;
		}

		cout << "Enter the student's OOP level "
				"(q or a negative number to finish): ";
		if (!(cin >> pa[i].oop_level) || pa[i].oop_level < 0)
		{
			cout << "Bad input; Input terminating\n";
			break;
		}
		while (cin.get() != '\n')
			continue;
	}

	return i;		// here is already the number of elements actually entered
}

void display_1(student st)
{
	cout << "Student's full name: " << st.full_name << endl;
	cout << "Student's hobby:     " << st.hobby 	<< endl;
	cout << "Student's OOP level: " << st.oop_level << endl;
}

void display_2(const student * ps)
{
	cout << "Student's full name: " << ps->full_name << endl;
	cout << "Student's hobby:     " << ps->hobby 	 << endl;
	cout << "Student's OOP level: " << ps->oop_level << endl;
}

void display_3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Student's full name: " << pa[i].full_name << endl;
		cout << "Student's hobby:     " << pa[i].hobby << endl;
		cout << "Student's OOP level: " << pa[i].oop_level << endl;
	}
}
