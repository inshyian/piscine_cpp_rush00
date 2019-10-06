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

Amo::Amo(int x, int y) : AItem(x, y)
{
	
}

AItem* Amo::clone() const
{
	Amo *newST = new Amo(*this);
	return newST;
}
