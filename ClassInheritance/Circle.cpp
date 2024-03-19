#include "Circle.h"


Circle::Circle()
{
	name = "Circle";
	radius = rand() % 100;
}

Circle::Circle(float _radius)
{
	name = "Circle";
	radius = _radius;
}

void Circle::show_info()
{
	std::cout << "\nObject name: " << name << "\n";
	std::cout << "\tRadius: " << radius << "\n";
}

void Circle::change_scale(float scale_factor)
{
	radius *= scale_factor;
}

std::string Circle::get_name()
{
	return name;
}

void Circle::calculate_area()
{
	area = 4 * 3.14 * pow(radius, 2);
}
