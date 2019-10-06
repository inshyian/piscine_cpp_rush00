#include "Amo.hpp"

Amo::Amo(void)
{

}

Amo::~Amo()
{

}

Amo::Amo(Amo const &assign)
{
	*this = assign;
}

Amo::Amo(int x, int y) : Object(x, y)
{

}

Amo &Amo::operator =(Amo const &assign)
{
	if (this != &assign)
	{
		_x = assign._x;
		_y = assign._y;
	}
	return *this;
}

Object* Amo::clone() const
{
	Amo *createOne = new Amo(*this);
	return createOne;
}
