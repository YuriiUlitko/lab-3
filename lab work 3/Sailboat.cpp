#include "Sailboat.h"

Sailboat::Sailboat(string name, int tonnage, string sail_type) : Ship(name, tonnage)
{
	this->name = name;
	this->tonnage = tonnage;
	this->sail_type = sail_type; 
}
void Sailboat::Show()
{
	cout << "Name: " << name << endl;
	cout << "Tonnage: " << tonnage << endl;
	cout << "Sail type: " << sail_type << endl << endl;
	cout << line;
}