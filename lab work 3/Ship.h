#pragma once
#include<iostream>
#include <string>
using namespace std;
class Ship
{
	static int count;
protected:
	string name;
	int tonnage;
public:
	string line = "---------------------------------------------\n";
	void Add();
	Ship(string name, int tonnage);
	Ship();
	virtual void Show()=0;
	static void Print();


	static void Print(int N);
};

