#include "Shape.h"


Shape::Shape(std::string _name)
{
	name = _name;
}

float Shape::get_scale()
{
	return scale;
}

std::string Shape::get_name()
{
	return name;
}

float Shape::get_radius()
{
	return radius;
}

float Shape::get_base()
{
	return base;
}

float Shape::get_height()
{
	return height;
}

float Shape::get_side()
{
	return side;
}

void Shape::show_info(float area_param, float height)
{

	if (name == "Circal")
	{
		std::cout << "Object: " << name << "\n";
		std::cout << "\tRadius: " << radius << "\n";
	}

	else if (name == "Triangle")
	{
		std::cout << "Object: " << name << "\n";
		std::cout << "\tBase: " << base << "\n";
		std::cout << "\tHeight: " << height << "\n";
	}

	else if (name == "Square")
	{
		std::cout << "Object: " << name << "\n";
		std::cout << "\tSides lenght: " << side << "\n";
	}

	else if (name == "Sphere")
	{
		std::cout << "Object: " << name << "\n";
		std::cout << "\tRadius: " << radius << "\n";
	}

	else if (name == "TriangulerPiramid")
	{
		std::cout << "Object: " << name << "\n";
		std::cout << "\tBase: " << base << "\n";
		std::cout << "\tHeight: " << height << "\n";

	}

	else if (name == "Cylinder")
	{

		std::cout << "Object: " << name << "\n";
		std::cout << "\tRaduis: " << radius << "\n";
		std::cout << "\tHeight: " << height << "\n";
	}

}



