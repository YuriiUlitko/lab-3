#pragma once
#include "Ship.h"
class Sailboat : public Ship
{
protected:
	string sail_type;
public:
	Sailboat(string name, int tonnage, string sail_type);
	void Show();
};

