#include "Triangle.h"


Triangle::Triangle()
{
	name = "Triangle";
	base = rand() % 100;
	height = rand() % 100;
}

Triangle::Triangle(float _base, float _height)
{
	name = "Triangle";
	base = _base;
	height = _height;
}

void Triangle::show_info()
{
	std::cout << "\nObject name: " << name << "\n";
	std::cout << "\tBase: " << base << "\n";
	std::cout << "\tHeight: " << height << "\n";
}

void Triangle::change_scale(float scale_factor)
{
	base *= scale_factor;
	height *= scale_factor;
}

std::string Triangle::get_name()
{
	return name;
}

void Triangle::calculate_area()
{
	area = (height * base) / 2;
}