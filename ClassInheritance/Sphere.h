#pragma once
#include"Shape3D.h"

class Sphere: public Shape3D
{
private:

	std::string name;

public:

	Sphere(std::string);
};

