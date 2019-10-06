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

Enemy::Enemy(int x, int y) : Object(x, y)
{

}

Object* Enemy::clone() const
{
	Enemy *createNewOne = new Enemy(*this);
	return createNewOne;
}
