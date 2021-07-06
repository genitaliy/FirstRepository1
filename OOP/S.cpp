#include "S.h"

Circle::Circle(int _r):
	r{_r}
{
}

void Circle::S()
{
	cout << "Circle S:" << Pi * r * r << endl;
}

Rectangle::Rectangle(int _a, int _b):
	a{_a},
	b{_b}
{
}

void Rectangle::S()
{
	cout << "Rectangle S: " << a * b << endl;
}

Trangle::Trangle(int _a, int _height) :
	a{ _a },
	height {_height}
{
}

void Trangle::S()
{
	cout << "Trangle S: " << a * height/2<<endl;
}

Trapezoid::Trapezoid(int _a, int _b, int _height):
	a{_a},
	b{_b},
	height{_height}
{
}

void Trapezoid::S()
{
	cout << "Trapezoid S: " << 1 / 2 * (a + b) * height << endl;
}
