#ifndef MARBLE_H
#define MARBLE_H

class marble
{
public:
	static const int DEFAULT_LIFE_DURATION = 180;
	bool is_permanent;
	float position[3];
	float direction[3];
	float speed;
	float size;
	int age;
	int mat;
	marble(float pX, float pY, float pZ, float dX, float dY, float dZ);
};

#endif