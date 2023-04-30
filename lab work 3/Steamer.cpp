#include "Steamer.h"
Steamer::Steamer(string name, int tonnage, string fuel_type) :Ship(name, tonnage)
{
	this->name = name;
	this->tonnage = tonnage; 
	this->fuel_type = fuel_type;
}
void Steamer::Show() {
	cout << "Name: " << name << endl;
	cout << "Tonnage: " << tonnage << endl;
	cout << "Fuel type: " << fuel_type << endl << endl;
	cout << line;
}
Steamer::Steamer()
{
}
