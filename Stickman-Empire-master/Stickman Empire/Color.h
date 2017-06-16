#pragma once
class Color
{
	unsigned int red, green, blue;
public:
	Color(unsigned int red, unsigned int green, unsigned int blue);
	virtual ~Color(void);
	void set(unsigned int red, unsigned int green, unsigned int blue);
	unsigned int getRed ();
	unsigned int getGreen ();
	unsigned int getBlue ();
};

