#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "AItem.hpp"


class Enemy : public AItem
{

public:
	Enemy(void);
	~Enemy();

	Enemy(Enemy const &other);
	
	Enemy &operator =(Enemy const &other);

	Enemy(int x, int y);


	AItem* clone() const;
};



#endif