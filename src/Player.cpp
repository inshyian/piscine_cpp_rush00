#include "Player.hpp"


Player::Player(void)
{

}

Player::~Player()
{

}

Player::Player(int x, int y, int lives)
{
	_x = x;
	_y = y;
	_lives =lives;
}

Player::Player(Player const &other)
{
	*this = other;
}

Player &Player::operator =(Player const &other)
{
	if (this != &other)
	{
		_lives = other._lives;
		_x = other._x;
		_y = other._y;
	}
	return *this;
}

int Player::getX() const
{
	return _x;
}

int Player::getY() const
{
	return _y;
}

int Player::getLives() const
{
	return _lives;
}

void Player::setLives(int newLives)
{
	_lives = newLives;
}


void Player::takeDamage(int damge)
{
	if (_lives == 0)
		return ;
	if (_lives - damge >= 0)
		_lives -= damge;
	else
		_lives = 0;
}

Bullet *Player::shoot(void)
{
	return new Bullet(_x, _y - 1);
}

bool Player::isAlive()
{
	if (_lives == 0)
		return false;
	return true;
}

void Player::moveLeft()
{
	_x--;
}

void Player::moveRight()
{
	_x++;
}
