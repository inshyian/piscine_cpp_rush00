#ifndef PLAYER_HPP
# define PLAYER_HPP

# include "Bullet.hpp"

class Player : public Object
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
		int getHp() const;							//getLives
		void setHpValue(int value);					//setLives
		//moveL() inherit
		//moveR() inherit
		//moveU() inherit
		//moveD() inherit
};

#endif
