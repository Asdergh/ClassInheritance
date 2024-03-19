#pragma once
#include"Shape3D.h"

class Cylinder: public Shape3D
{
private:

	std::string name;
	float height;
	float radius;
	float volume;

public:

	Cylinder();
	Cylinder(float, float);
	void show_info();
	void change_scale(float);
	std::string get_name();
	void calculate_volume();
};

