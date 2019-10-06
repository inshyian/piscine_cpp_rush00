#ifndef AENEMY_HPP
# define AENEMY_HPP

class AEnemy
{
private:
	int _x;
	int _y;


public:
	AEnemy(void);
	~AEnemy();
	AEnemy(AEnemy const &other);

	AEnemy &operator =(AEnemy const &other);

};

#endif
