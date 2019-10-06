#ifndef STAR_HPP
# define STAR_HPP

#include "Object.hpp"

class Star : public Object
{
public:
	Star(void);
	~Star();
	Star(Star const &other);

	Star &operator =(Star const &other);

	Star(int x, int y, char character);


	Object* clone() const;

};




#endif
