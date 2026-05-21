#include "Diamond.h"

Diamond::Diamond()
{
	weight = 2.86f;
	name = "Diamond";
	hardness = 3.5f;
}

void Diamond::Describe()
{
	cout << "Name :" << name << endl;
	cout << "Weight :" << weight << "g" << endl;
}