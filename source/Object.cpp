#include "Object.hpp"

Object::Object(void)
{

}

Object::Object(int x, int y)
{
	_x = x;
	_y = y;
}


Object::Object(Object const &assign)
{
	*this = assign;
}

Object &Object::operator =(Object const &assign)
{
	if (this != &assign)
	{
		_x = assign._x;
		_y = assign._y;
	}
	return *this;
}

Object::~Object()
{

}

int Object::getCordX() const
{
	return _x;
}
int Object::getCordY() const
{
	return _y;
}

void Object::setCordX(int x)
{
	_x = x;
}
void Object::setCordY(int y)
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
