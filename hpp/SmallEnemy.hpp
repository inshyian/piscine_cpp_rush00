#ifndef SMALLENEMY_HPP
# define SMALLENEMY_HPP

# include "AItem.hpp"


class SmallEnemy : public AItem
{

public:
	SmallEnemy(void);
	~SmallEnemy();

	SmallEnemy(SmallEnemy const &other);
	
	SmallEnemy &operator =(SmallEnemy const &other);

	SmallEnemy(int x, int y);


	AItem* clone() const;
};



#endif