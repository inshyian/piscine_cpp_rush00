#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "Object.hpp"


class Enemy : public Object
{

public:
	Enemy(void);
	~Enemy();

	Enemy(Enemy const &other);

	Enemy &operator =(Enemy const &other);

	Enemy(int x, int y, char character);

	Object* clone() const;
};



#endif
