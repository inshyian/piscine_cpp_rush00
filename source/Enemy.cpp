#include "Enemy.hpp"

Enemy::Enemy(void)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const &assign)
{
	*this = assign;
}
	
Enemy &Enemy::operator =(Enemy const &assign)
{
	if (this != &assign)
	{
		_x = assign._x;
		_y = assign._y;
	}
	return *this;
}

Enemy::Enemy(int x, int y) : Object(x, y)
{

}

Object* Enemy::clone() const
{
	Enemy *newST = new Enemy(*this);
	return newST;
}
