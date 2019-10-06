#include "Enemy.hpp"

Enemy::Enemy(void)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const &other)
{
	*this = other;
}
	
Enemy &Enemy::operator =(Enemy const &other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

Enemy::Enemy(int x, int y) : AItem(x, y)
{

}

AItem* Enemy::clone() const
{
	Enemy *newST = new Enemy(*this);
	return newST;
}
