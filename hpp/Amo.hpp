#ifndef AMO_HPP
# define AMO_HPP

# include "AItem.hpp"

class Amo : public AItem
{

public:
	Amo(void);
	~Amo();

	Amo(Amo const &other);
	
	Amo &operator =(Amo const &other);

	Amo(int x, int y);


	AItem* clone() const;

};



#endif
