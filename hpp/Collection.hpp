#ifndef COLLECTION_HPP
# define COLLECTION_HPP

# include <iostream>

class Object;

class Collection
{
	
private:
	int _count;
	Object **_items;

public:
	Collection(void);
	~Collection();
	Collection(Collection const &other);

	Collection &operator =(Collection const &other);

	int		getCount(void) const;
	Object*	getUnit(int n) const;
	void	setNullUnit(int n);
	int		push(Object* newItem);

};


#endif