#pragma once
#include"Shape2D.h"

class Circle: public Shape2D
{
private:
	
	std::string name;
	float radius;
	float area;

public:

	Circle();
	Circle(float);
	void show_info();
	void change_scale(float);
	std::string get_name();
	void calculate_area();

};

