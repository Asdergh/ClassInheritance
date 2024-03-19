#include "Square.h"

Square::Square()
{
	name = "Square";
	side_a = rand() % 100;
	side_b = rand() % 100;
}

Square::Square(float _side_a, float _side_b)
{
	name = "Square";
	side_a = _side_a;
	side_b = _side_b;
}

void Square::show_info()
{
	std::cout << "\nObject name: " << name << "\n";
	std::cout << "\tSide_a: " << side_a << "\n";
	std::cout << "\tSide_b: " << side_b << "\n";
}

std::string Square::get_name()
{
	return name;
}

void Square::change_scale(float scale_factor)
{
	side_a *= scale_factor;
	side_b *= scale_factor;
}

void Square::calculate_area()
{
	area = side_a * side_b;
}