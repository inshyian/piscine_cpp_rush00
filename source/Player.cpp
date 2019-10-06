#include "Player.hpp"

Player::Player(void)
{

}

Player::~Player()
{

}

Player::Player(int x, int y, int hp)
{
	_x = x;
	_y = y;
	_hp = hp;
}

Player::Player(Player const &assign)
{
	*this = assign;
}

Player &Player::operator =(Player const &assign)
{
	if (this != &assign)
	{
		_hp = assign._hp;
		_x = assign._x;
		_y = assign._y;
	}
	return *this;
}

int Player::getCordX() const
{
	return _x;
}

int Player::getCordY() const
{
	return _y;
}

int Player::getHp() const
{
	return _hp;
}

void Player::setHp(int value)
{
	_hp = value;
}


void Player::damageReceived(int value)
{
	if (_hp == 0)
		return ;
	if (_hp - value >= 0)
		_hp -= value;
	else
		_hp = 0;
}

Bullet *Player::shot(void)
{
	return new Amo(_x, _y - 1);
}

bool Player::checkHp()
{
	if (_hp == 0)
		return false;
	return true;
}

void Player::moveL()
{
	_x--;
}

void Player::moveR()
{
	_x++;
}

