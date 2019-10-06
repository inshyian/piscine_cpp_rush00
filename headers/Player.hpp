#ifndef PLAYER_HPP
# define PLAYER_HPP

# include "Bullet.hpp"

class Player
{
	private:
		int _x;
		int _y;
		int _hp;									//lives

	public:
		Player(void);
		Player(Player const &other);
		Player(int x, int y, int hp);
		~Player();

		Player &operator =(Player const &other);

		bool checkHp(); 							//isAlive
		Bullet *shot(void);							//shoot
		void damageReceived(int value);				//takeDamage
		int getCordX() const;						//getX
		int getCordY() const;						//getY
		int getHp() const;							//getLives
		void setLives(int value);					//setLives
		void moveL();								//moveLeft
		void moveR();								//moveRight
};

#endif
