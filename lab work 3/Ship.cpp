#include "Ship.h"
#include <iostream>
Ship** ship = new Ship * [10];
int Ship::count = -1;

Ship::Ship()
{
	++count;
}
void Ship::Print()
{
	cout << "Ship list:\n\n";
	for (int i = 0; i <= count; i++)
	{
		if (ship[i] != nullptr)
			ship[i]->Show();
	}
}


void Ship::Show() {
	cout << "Name: " << name << endl;
	cout << "Tonnage: " << tonnage << endl << endl;
	cout << line;
}

void Ship::Add()
{
	::ship[count] = this;
}

Ship::Ship(string name, int tonnage)
{
	this->name = name;
	this->tonnage = tonnage;
	++count;
}



void Ship::Print(int N)
{
	if (N < 1)
	{
		cout << "Uncorect number of class object (N=" << N << ")" << endl;
	}
	else 
	{
		if (N > count + 1)
		{
			cout << "There only " << count + 1 << " class objects" << endl;
		}
		else
		{
			cout << "Ship list:\n\n";

			ship[N - 1]->Show();

		}
	}
}
