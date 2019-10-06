#include "Bullet.hpp"

#include <stdio.h>
Bullet::Bullet(void)
{

}

Bullet::~Bullet()
{
	
}

Bullet::Bullet(Bullet const &other)
{
	*this = other;
}
	
Bullet &Bullet::operator =(Bullet const &other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

Bullet::Bullet(int x, int y) : AItem(x, y)
{
	
}

AItem* Bullet::clone() const
{
	Bullet *newST = new Bullet(*this);
	return newST;
}
