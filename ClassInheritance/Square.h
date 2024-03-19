#pragma once
#include "Shape2D.h"
class Square: public Shape2D
{
private:
	
	
	std::string name;
	float side_a;
	float side_b;
	float area;

public:

	Square();
	Square(float, float);
	void show_info();
	void change_scale(float);
	std::string get_name();
	void calculate_area();
};

