#pragma once
#include"Shape.h"


class Shape3D: public Shape
{

private:

	float volume;

public:

	Shape3D(std::string);
	float get_volume();
	int operator > (const Shape3D);
	int operator < (const Shape3D);
	int operator == (const Shape3D);
	void calculate_volume();
};

