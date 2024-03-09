#include "Shape3D.h"


Shape3D::Shape3D(std::string name) : Shape(name) {}
float Shape3D::get_volume()
{
	return volume;
}

void Shape3D::calculate_volume()
{

	std::string name = get_name();
	float radius = get_radius();
	float base = get_base();
	float height = get_height();
	float side = get_side();

	if (name == "Sphere")
	{
		float volume = (4 / 3) * 3.14 * pow(radius, 3);
	}

	else if (name == "TrianglePyramid")
	{
		float volume = ((1 / (4 * pow(3, 0.5))) * pow(base, 2) * height);
	}

	else if (name == "Cylinder")
	{
		float volume = (1 / 4) * (height * pow(radius, 2) * 3.14);
	}
}

int Shape3D::operator > (const Shape3D other)
{
	if (volume > other.volume)
	{
		return 1;
	}

	else 
	{
		return 0;
	}
}

int Shape3D::operator < (const Shape3D other)
{
	if (volume < other.volume)
	{
		return 1;
	}

	else
	{
		return 0;
	}

}

int Shape3D::operator == (const Shape3D other)
{
	if (volume == other.volume)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}