#ifndef PLAYER_HPP
# define PLAYER_HPP

# include "Amo.hpp"

class Player
{

private:
	int _x;
	int _y;
	int _lives;

public:
	Player(void);
	Player(Player const &other);
	Player(int x, int y, int lives);
	~Player();

	Player &operator =(Player const &other);

	void takeDamage(int damge);
	Amo *shoot(void);
	bool isAlive();

	int getX() const;
	int getY() const;
	int getLives() const;

	void setLives(int newLives);

	void moveLeft();
	void moveRight();

};


#endif
