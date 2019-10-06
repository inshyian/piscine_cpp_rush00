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
		_character = other._character;
	}
	return *this;
}

Enemy::Enemy(int x, int y, char character) : Object(x, y, character)
{

}

Object* Enemy::clone() const
{
	Enemy *createNewOne = new Enemy(*this);
	return createNewOne;
}
