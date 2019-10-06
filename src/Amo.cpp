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
		_character = other._character;
	}
	return *this;
}

Amo::Amo(int x, int y, char character) : Object(x, y, character)
{

}

Object* Amo::clone() const
{
	Amo *createNewOne = new Amo(*this);
	return createNewOne;
}
