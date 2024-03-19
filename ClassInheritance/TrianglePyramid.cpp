#include "TrianglePyramid.h"

TrianglePyramid::TrianglePyramid()
{
	name = "TrianglePyramid";
	base = rand() % 100;
	height = rand() % 100;
}

TrianglePyramid::TrianglePyramid(float _base, float _height)
{
	name = "TrianglePyramid";
	base = _base;
	height = _height;
}

void TrianglePyramid::show_info()
{
	std::cout << "\nObject name: " << name;
	std::cout << "\tBase: " << base;
	std::cout << "\tHeight: " << height;
}

void TrianglePyramid::change_scale(float scale_factor)
{
	base *= scale_factor;
	height *= scale_factor;
}

std::string TrianglePyramid::get_name()
{
	return name;
}

void TrianglePyramid::calculate_volume()
{
	volume = base * pow(height, 2);
}