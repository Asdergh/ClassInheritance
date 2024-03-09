#include "Shape2D.h"



Shape2D::Shape2D(std::string name) : Shape(name) {}
void Shape2D::calculate_area()
{
	std::string name = get_name();
	float radius = get_radius();
	float base = get_base();
	float height = get_height();
	float side = get_side();

	
	if (name == "Circle")
	{
		area = (1 / 2) * 3.14 * pow(radius, 2);
	}

	else if (name == "Square")
	{
		area = side * side;
	}

	else if (name == "Triangle")
	{
		area = (1 / 2) * base * height;
	}

}

float Shape2D::get_area()
{
	return area;
}

int Shape2D::operator > (const Shape2D other)
{
	if (area > other.area)
	{
		return 1;
	}

	else {
		return 0;
	}
}

int Shape2D::operator < (const Shape2D other)
{
	if (area < other.area)
	{
		return 1;
	}

	else
	{
		return 0;
	}

}

int Shape2D::operator == (const Shape2D other)
{
	if (area == other.area)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}