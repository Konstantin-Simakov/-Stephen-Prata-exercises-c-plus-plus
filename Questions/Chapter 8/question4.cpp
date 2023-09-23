// question4.cpp -- Chapter 8
#include <iostream>

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(const box &);
void set_volume(box &);

int main(void)
{
	using namespace std;
	box gift = {"Sony Inc.", 15, 20, 25};

	set_volume(gift);
	show_box(gift);

	return 0;
}

void show_box(const box & b)
{
	using namespace std;
	cout << "Made by " << b.maker << endl;
	cout << "Height: " << b.height << endl;
	cout << "Width: " << b.width << endl;
	cout << "Length: " << b.length << endl;
	cout << "Volume: " << b.volume << endl;
}

void set_volume(box & b)
{
	b.volume = b.height * b.width * b.length;
}
