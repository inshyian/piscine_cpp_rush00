#include "AItem.hpp"

AItem::AItem(void)
{

}

AItem::AItem(int x, int y)
{
	_x = x;
	_y = y;
}


AItem::AItem(AItem const &other)
{
	*this = other;
}

AItem &AItem::operator =(AItem const &other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

AItem::~AItem()
{

}

int AItem::getX() const
{
	return _x;
}
int AItem::getY() const
{
	return _y;
}

void AItem::setX(int x)
{
	_x = x;
}
void AItem::setY(int y)
{
	_y = y;
}

void AItem::moveLeft()
{
	_x--;
}

void AItem::moveRight()
{
	_x++;
}

void AItem::moveUp()
{
	_y--;
}

void AItem::moveDown()
{
	_y++;
}