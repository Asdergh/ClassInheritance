#pragma once
#include"Shape2D.h"

class Triangle: public Shape2D
{
private:

	std::string name;
	float base;
	float height;
	float area;

public:

	Triangle();
	Triangle(float, float);

	void show_info();
	void change_scale(float);
	std::string get_name();
	void calculate_area();
};

