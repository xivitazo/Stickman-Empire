#include "Color.h"


Color::Color(unsigned int red=255, unsigned int green=255, unsigned int blue=255)
{
	if (red>255)
		this->red=255;
	else
		this ->red=red;
	if (green>255)
		this->green=255;
	else
		this ->green=green;
	if (blue>255)
		this->blue=255;
	else
		this ->blue=blue;
}


Color::~Color(void)
{
}


void Color:: set(unsigned int red=0, unsigned int green=0, unsigned int blue=0)
{
	if (red>255)
		this->red=255;
	else
		this ->red=red;
	if (green>255)
		this->green=255;
	else
		this ->green=green;
	if (blue>255)
		this->blue=255;
	else
		this ->blue=blue;
}
unsigned int Color:: getRed ()
{
	return red;
}
unsigned int Color:: getGreen ()
{
	return green;
}
unsigned int Color:: getBlue ()
{
	return blue;
}