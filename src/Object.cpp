#include "Object.hpp"

Object::Object(void)
{

}

Object::Object(int x, int y)
{
	_x = x;
	_y = y;
}


Object::Object(Object const &other)
{
	*this = other;
}

Object &Object::operator =(Object const &other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

Object::~Object()
{

}

int Object::getX() const
{
	return _x;
}
int Object::getY() const
{
	return _y;
}

void Object::setX(int x)
{
	_x = x;
}
void Object::setY(int y)
{
	_y = y;
}

void Object::moveLeft()
{
	_x--;
}

void Object::moveRight()
{
	_x++;
}

void Object::moveUp()
{
	_y--;
}

void Object::moveDown()
{
	_y++;
}