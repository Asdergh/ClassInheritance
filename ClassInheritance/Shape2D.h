#pragma once
#include "Shape.h"

class Shape2D: public Shape
{
private:

	float area;

public:
	
	Shape2D(std::string);
	float get_area();
	int operator > (const Shape2D);
	int operator < (const Shape2D);
	int operator == (const Shape2D);
	void calculate_area();
};

