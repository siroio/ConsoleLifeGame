#ifndef VECTOR2_H
#define VECTOR2_H

#include <string>

class Vector2
{
public:
	Vector2(int x = 0, int y = 0);
	std::string String() const;
public:
	int x;
	int y;
};

#endif