#pragma once

#include "Ship.h"
class Steamer : public Ship
{
protected:
	string fuel_type;
public:
	Steamer();
	Steamer(string name, int tonnage, string fuel_type);
	void Show();
};

