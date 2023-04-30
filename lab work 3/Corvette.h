#pragma once
#include "Steamer.h"
class Corvette : public Steamer 
{
protected:
	int max_speed;
public:
	Corvette(string name, int tonagge, string fuel_type, int max_speed);

	void Show();
};

