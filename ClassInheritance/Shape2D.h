#pragma once
#include "Shape.h"

class Shape2D: public Shape
{
private:

	float area;
	std::string name;

public:
	
	virtual void show_info();
	virtual void change_scale(float);
	virtual std::string get_name();
	virtual void calculate_area();

	int operator > (const Shape2D);
	int operator < (const Shape2D);
	int operator == (const Shape2D);

};

