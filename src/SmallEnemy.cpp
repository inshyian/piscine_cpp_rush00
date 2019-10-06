#include "SmallEnemy.hpp"

SmallEnemy::SmallEnemy(void)
{
}

SmallEnemy::~SmallEnemy()
{
}

SmallEnemy::SmallEnemy(SmallEnemy const &other)
{
	*this = other;
}
	
SmallEnemy &SmallEnemy::operator =(SmallEnemy const &other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

SmallEnemy::SmallEnemy(int x, int y) : AItem(x, y)
{

}

AItem* SmallEnemy::clone() const
{
	SmallEnemy *newST = new SmallEnemy(*this);
	return newST;
}