#include "Vector2.h"

Vector2::Vector2(int x, int y)
{
    this->x = x;
    this->y = y;
}

std::string Vector2::String() const
{
	const auto x = std::to_string(this->x);
	const auto y = std::to_string(this->y);
    return x + "," + y;
}
