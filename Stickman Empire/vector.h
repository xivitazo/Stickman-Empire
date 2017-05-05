#pragma once
class vector
{
public:
	vector(float x=0, float y=0);
	virtual ~vector(void);
	float modulo ();
	void setValor(float x, float y);
	float getX();
	float getY();
	vector operator - (vector &);
	vector operator + (vector &);
	vector operator * (float);
	float operator * (vector &);
private:
	float vx, vy;
};

