#ifndef BULLET_HPP
# define BULLET_HPP

# include "AItem.hpp"

class Bullet : public AItem
{

public:
	Bullet(void);
	~Bullet();

	Bullet(Bullet const &other);
	
	Bullet &operator =(Bullet const &other);

	Bullet(int x, int y);


	AItem* clone() const;

};



#endif
