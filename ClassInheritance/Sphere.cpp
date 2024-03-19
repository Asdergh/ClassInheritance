#include "Sphere.h"


Sphere::Sphere()
{
	name = "Sphere";
	radius = rand() % 100;
}

Sphere::Sphere(float _radius)
{
	name = "Sphere";
	radius = _radius;
}

void Sphere::show_info()
{
	std::cout << "\nObject name: " << name << "\n";
	std::cout << "\tRadius: " << radius;
}

void Sphere::change_scale(float scale_factor)
{
	radius *= scale_factor;
}

std::string Sphere::get_name()
{
	return name;
}

void Sphere::calculate_volume()
{
	volume = 4 * (3.14) * pow(radius, 3);
}
