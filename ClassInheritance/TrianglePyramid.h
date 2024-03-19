#pragma once
#include "Shape3D.h"

class TrianglePyramid: public Shape3D
{
private:
	
	std::string name;
	float base;
	float height;
	float volume;

public:

	TrianglePyramid();
	TrianglePyramid(float, float);

	void show_info();
	void change_scale(float);
	std::string get_name();
	void calculate_volume();
};

