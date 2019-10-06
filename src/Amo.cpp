#include "Amo.hpp"


Amo::Amo(void)
{

}

Amo::~Amo()
{
	
}

Amo::Amo(Amo const &other)
{
	*this = other;
}
	
Amo &Amo::operator =(Amo const &other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

Amo::Amo(int x, int y) : Object(x, y)
{
	
}

Object* Amo::clone() const
{
	Amo *createNewOne = new Amo(*this);
	return createNewOne;
}
