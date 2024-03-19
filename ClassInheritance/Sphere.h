#pragma once
#include"Shape3D.h"

class Sphere: public Shape3D
{
private:

	std::string name;
	float radius;
	float volume;


public:

	Sphere();
	Sphere(float);
	void show_info();
	void change_scale(float);
	std::string get_name();
	void calculate_volume();
};

