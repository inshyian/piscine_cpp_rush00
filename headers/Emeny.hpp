#ifndef SMALLENEMY_HPP
# define SMALLENEMY_HPP

# include "Object.hpp"

class Enemy : public Object
{
	public:
		Enemy(void);
		~Enemy();

		Enemy(Enemy const &other);
	
		Enemy &operator =(Enemy const &other);

		Enemy(int x, int y);

		Object* clone() const;
};



#endif
