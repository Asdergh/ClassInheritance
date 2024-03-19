#pragma once
#include"Shape.h"


class Shape3D: public Shape
{

private:

	float volume;

public:

	virtual void show_info();
	virtual void change_scale(float);
	virtual std::string get_name();
	virtual void calculate_volume();

	int operator > (const Shape3D);
	int operator < (const Shape3D);
	int operator == (const Shape3D);
};

