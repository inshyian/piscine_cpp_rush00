#include "Star.hpp"

Star::Star(void)
{
}

Star::~Star()
{

}

Star::Star(Star const &other)
{
	*this = other;
}
	
Star &Star::operator =(Star const &other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

Star::Star(int x, int y) : Object(x, y)
{

}

Object* Star::clone() const
{
	Star *createNewOne = new Star(*this);
	return createNewOne;
}

