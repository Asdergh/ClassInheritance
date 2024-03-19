#include"Shape2D.h"


void Shape2D::show_info()
{
	std::cout << "Shape2D have none params to show";
}

std::string Shape2D::get_name()
{
	std::cout << "Shape2D have none name to get";
	return "None";
}

void Shape2D::change_scale(float scale_factor)
{
	std::cout << "Shape2D have none params to change";
}

int Shape2D::operator > (const Shape2D other)
{
	if (area > other.area)
	{
		return 0;
	}

	else
	{
		return 1;
	}
}

int Shape2D::operator < (const Shape2D other)
{
	if (area < other.area)
	{
		return 0;
	}

	else
	{
		return 1;
	}
}

int Shape2D::operator == (const Shape2D other)
{
	if (area == other.area)
	{
		return 0;
	}

	else
	{
		return 1;
	}
}

void Shape2D::calculate_area()
{
	std::cout << "Shape2D object have none area";
}