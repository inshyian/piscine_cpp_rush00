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

Star::Star(int x, int y) : AItem(x, y)
{

}

AItem* Star::clone() const
{
	Star *newST = new Star(*this);
	return newST;
}

