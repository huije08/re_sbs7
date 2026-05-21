#include "Emerald.h"

Emerald::Emerald()
{
	weight = 1.75f;
	name = "Emerald";
	clarity = 2.5f;
}

void Emerald::Describe()
{
	cout << "Name :" << name << endl;
	cout << "Weight :" << weight << "g" << endl;
}