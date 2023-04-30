#include "Corvette.h"
Corvette::Corvette(string name, int tonagge, string fuel_type, int max_speed)
{
	this->name = name;
	this->tonnage = tonagge;
	this-> fuel_type = fuel_type;
	this->max_speed = max_speed; 

}
void Corvette::Show()
{
	cout << "Name: " << name << endl;
	cout << "Tonnage: " << tonnage << endl;
	cout << "Max speed: " << max_speed <<" km/h" << endl;
	cout << "Fuel type: " << fuel_type << endl << endl;
	cout << line;
}