#include <iostream>
#include "Ship.h"
#include "Steamer.h"
#include "Sailboat.h"
#include "Corvette.h"

int main()
{
	Ship* steamer0 = new Steamer("Ukraine", 500, "Wood");
	steamer0->Add();
	Ship* sailboat0 = new Sailboat("Donbass", 1000, "Big");
	sailboat0->Add();
	Ship* corvette0 = new Corvette("Bahmut", 1500, "Diesel", 100);
	corvette0->Add();


	Ship::Print(-5);
}
