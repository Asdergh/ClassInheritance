#include "Cylinder.h"

Cylinder::Cylinder()
{
	name = "Cylinder";
	height = rand() % 100;
	radius = rand() % 100;

}

Cylinder::Cylinder(float _height, float _radius)
{
	name = "Cylinder";
	height = _height;
	radius = _radius;
}

void Cylinder::show_info()
{
	std::cout << "Object name: " << name << "\n";
	std::cout << "\tHeight: " << height << "\n";
	std::cout << "\tRadius: " << radius << "\n";
}

void Cylinder::change_scale(float scale_factor)
{
	height *= scale_factor;
	radius *= scale_factor;
}

std::string Cylinder::get_name()
{
	return name;
}

void Cylinder::calculate_volume()
{
	volume = 3.14 * pow(radius, 2) * height;
}