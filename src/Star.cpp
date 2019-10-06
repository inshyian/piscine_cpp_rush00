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
		_character = other._character;
	}
	return *this;
}

Star::Star(int x, int y, char character) : Object(x, y, character)
{

}

Object* Star::clone() const
{
	Star *createNewOne = new Star(*this);
	return createNewOne;
}
