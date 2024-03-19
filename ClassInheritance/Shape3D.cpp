#include"Shape3D.h"


void Shape3D::show_info()
{
	std::cout << "\n<Shape3D have none params to show>\n";
}

std::string Shape3D::get_name()
{
	std::cout << "<Shape3D object have none name>\n";
	return "None";
}

void Shape3D::change_scale(float scale_factor)
{
	std::cout << "<Shape3D object have none params to change>\n";

}

void Shape3D::calculate_volume()
{
	std::cout << "<Shape3D object have no params to calculate volume>\n";
}

int Shape3D::operator > (const Shape3D other)
{
	if (volume > other.volume) 
	{
		return 0;
	}

	else
	{
		return 1;
	}
}

int Shape3D::operator < (const Shape3D other)
{
	if (volume < other.volume)
	{
		return 0;
	}

	else
	{
		return 1;
	}
}

int Shape3D::operator == (const Shape3D other)
{
	if (volume == other.volume)
	{
		return 0;
	}

	else
	{
		return 1;
	}
}
