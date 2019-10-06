#ifndef AMO_HPP
# define AMO_HPP

# include "Object.hpp"

class Amo : public Object
{
	public:
	Amo(void);
	~Amo();

	Amo(Amo const &other);
	
	Amo &operator =(Bullet const &other);

	Amo(int x, int y);
	Object* clone() const;
};

#endif
