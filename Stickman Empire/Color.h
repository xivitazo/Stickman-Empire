#pragma once
class Color
{
	unsigned int red, green, blue;
public:
	Color(void);
	virtual ~Color(void);
	void set(unsigned int red, unsigned int green, unsigned int blue);
	unsigned int getRed ();
	unsigned int getGreen ();
	unsigned int getBlue ();
};

