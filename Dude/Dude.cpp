#include <cmath>
#include "Dude.h"

dudeSpace::dude::dude()
{
	x = 0;
	y = 0;
	z = 0;
}

dudeSpace::dude::dude(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

dudeSpace::dude::~dude()
{}

float dudeSpace::dude::getx()
{
	return x;
}

float dudeSpace::dude::gety()
{
	return y;
}

float dudeSpace::dude::getz()
{
	return z;
}

float dudeSpace::dude::distance(dude otherDude)
{
	return sqrt(
		pow(otherDude.getx() - x, 2)
		+ pow(otherDude.gety() - y, 2)
		+ pow(otherDude.getz() - z, 2)
	);
}
