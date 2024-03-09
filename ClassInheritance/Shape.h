#pragma once

#include<iostream>
#include<vector>
#include<math.h>
#include<string>

class Shape
{
private:

	std::string name;
	float scale{0};
	int shape_type{0};

	float radius{0};
	float height{0};
	float base{0};
	float side{0};

public:

	Shape(std::string);
	float get_scale();
	float get_radius();
	float get_height();
	float get_base();
	float get_side();

	void show_info(float, float);
	std::string get_name();

};

