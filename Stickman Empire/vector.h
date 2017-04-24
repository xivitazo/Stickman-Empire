#pragma once
class vector
{
public:
	vector(void);
	~vector(void);
	float modulo ();
	float set_Valor(float x, float y);
	float get_x();
	float get_y();
private:
	float vx, vy;
};

