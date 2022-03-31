// exercise3.cpp -- Chapter 7
#include <iostream>

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void calc_volume(box *);
void display(box);

int main(void)
{
	box new_product = { "Computer", 15.0f, 10.0f, 4.0f };	// and there is once more member "volume"
	
	calc_volume(&new_product);								// which is calculated here
	display(new_product);				// displaying all structure members including member "volume"

	return 0;
}

void calc_volume(box * product)
{
	product->volume = product->height * product->width * product->length;
}

void display(box product)
{
	using namespace std;
	cout << "Maker: " << product.maker << endl;
	cout << "Height: " << product.height << endl;
	cout << "Width: " << product.width << endl;
	cout << "Length: " << product.length << endl;
	cout << "Volume: " << product.volume << endl;
}
