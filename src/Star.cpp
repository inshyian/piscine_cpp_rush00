#include "Steroid.hpp"

// #include <iostream>

Steroid::Steroid(void)
{
}

Steroid::~Steroid()
{

}

Steroid::Steroid(Steroid const &other)
{
	*this = other;
}
	
Steroid &Steroid::operator =(Steroid const &other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

Steroid::Steroid(int x, int y) : AItem(x, y)
{

}

AItem* Steroid::clone() const
{
	Steroid *newST = new Steroid(*this);
	return newST;
}

