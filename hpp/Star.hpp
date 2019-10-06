#ifndef STAR_HPP
# define STAR_HPP

#include "AItem.hpp"

class Star : public AItem
{
//private:
//	int _x;
//	int _y;

public:
	Star(void);
	~Star();
	Star(Star const &other);
	
	Star &operator =(Star const &other);

	Star(int x, int y);


	AItem* clone() const;

};




#endif
