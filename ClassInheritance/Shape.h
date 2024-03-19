#pragma once

#include<iostream>
#include<vector>
#include<math.h>
#include<string>

class Shape
{

public:

	virtual void show_info() = 0;
	virtual std::string get_name() = 0;
	virtual void change_scale(float) = 0;

};

